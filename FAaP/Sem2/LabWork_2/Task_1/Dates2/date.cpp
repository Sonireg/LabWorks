#include "date.h"

Date::Date() {}

Date::Date(const QString &datestr)
{
    *this = StringInDate(datestr);
}

Date::Date(int initday, int initmonth, int inityear)
{
    day = initday;
    month = initmonth;
    year = inityear;
}

Date::Date(const QDate &initdate)
{
    year = initdate.year();
    day = initdate.day();
    month = initdate.month();
}

bool Date::isValid()
{
    return (this->year < 10000 && this->year > 0 && this->month > 0 && this->month <= 12 && this->day > 0 &&
            this->day <= GetDaysInMonth(month));
}

Date Date::StringInDate(QString datestr)
{
    QStringList dateParts = datestr.split('.');
    if (dateParts.size() != 3) return Date(0, 0, 0);
    Date tryget = Date(datestr.split('.')[0].toInt(), datestr.split('.')[1].toInt(), datestr.split('.')[2].toInt());
    if (tryget.isValid()) return tryget;
    return Date(0, 0, 0);
}

Date Date::NextDay()
{
    int nextday, nextmonth, nextyear;
    nextday = day + 1;
    nextmonth = month;
    nextyear = year;
    if (nextday > GetDaysInMonth(month))
    {
        nextday = 1;
        nextmonth += 1;
    }
    if (nextmonth > 12)
    {
        nextmonth = 1;
        nextyear += 1;
    }
    return Date(nextday, nextmonth, nextyear);
}

Date Date::PreviousDay()
{
    int prevday, prevmonth, prevyear;
    prevday = day - 1;
    prevmonth = month;
    prevyear = year;
    if (prevday < 1)
    {
        if (prevmonth == 1)
        {
            prevmonth = 12;
            prevyear -= 1;
            prevday = 31;
        }
    }
    return Date(prevday, prevmonth, prevyear);
}

bool Date::IsLeap()
{
    if (year % 400 == 0) return true;
    if (year % 100 == 0) return false;
    if (year % 4 == 0) return true;
    return false;
}

short Date::WeekNumber()
{
    int january1weekday = Date(1, 1, year).JulianCalenderNumber() % 7;
    january1weekday = january1weekday == 0 ? 7 : january1weekday;
    int firstmonday = Date(1, 1, year).JulianCalenderNumber() + 7 - january1weekday;
    if (Date(1, 1, year).JulianCalenderNumber() >= this->JulianCalenderNumber()) return 1;
    return (JulianCalenderNumber() - firstmonday) / 7 + 1 + (january1weekday == 7 ? 0 : 1);
}

int Date::DaysTillYourBithday(Date birthdaydate)
{
    if (birthdaydate > *this) return -1;
    Date nextbirthday = Date(birthdaydate.getDay(), birthdaydate.getMonth(), year);
    nextbirthday = (nextbirthday > *this) ? nextbirthday : Date(birthdaydate.getDay(), birthdaydate.getMonth(), year + 1);
    return Duration(nextbirthday);
}

int Date::Duration(Date targetdate)
{
    return qAbs(this->JulianCalenderNumber() - targetdate.JulianCalenderNumber());
}

int Date::GetDaysInMonth(int m) {
    if (m == 2)
    {
        return IsLeap() ? 29 : 28;
    } else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        return 30;
    } else
    {
        return 31;
    }
}

int Date::JulianCalenderNumber()
{
    int yearsday = 365 * (year - 1) + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400, monthday = 0;
    for (int i = 1; i < month; ++i)
    {
        monthday += GetDaysInMonth(i);
    }
    return yearsday + monthday + day;
}

bool Date::operator>(const Date &other)
{
    if (this->year > other.year) return true;
    if (this->year < other.year) return false;
    if (this->month > other.month) return true;
    if (this->month < other.month) return false;
    if (this->day > other.day) return true;
    return false;
}

bool Date::operator==(Date &other)
{
    return this->year == other.year && this->month == other.month && this->day == other.day;
}

int Date::getDay()
{
    return day;
}

int Date::getMonth()
{
    return month;
}

int Date::getYear()
{
    return year;
}

QString Date::tostr()
{
    QString datestr = "";
    datestr += (day < 10 ? "0" : "") + QString::number(day) + "." + (month < 10 ? "0" : "") +
               QString::number(month)  + ".";
    if (year >= 1000) datestr += QString::number(year);
    else if (year >= 100) datestr += "0" + QString::number(year);
    else if (year >= 10) datestr += "00" + QString::number(year);
    else datestr += "000" + QString::number(year);
    return datestr;
}
