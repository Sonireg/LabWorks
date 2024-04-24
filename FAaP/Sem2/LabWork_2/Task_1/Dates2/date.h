#ifndef DATE_H
#define DATE_H

#include <QString>
#include <QList>
#include <QDate>
class Date
{
public:
    Date();
    Date(const QString&);
    Date(int, int, int);
    Date(const QDate&);
    bool isValid();
    Date StringInDate(QString DateString);
    Date NextDay();
    Date PreviousDay();
    bool IsLeap();
    short WeekNumber();
    int DaysTillYourBithday(Date birthdaydate);
    int Duration (Date date);
    int GetDaysInMonth(int);
    int JulianCalenderNumber();
    bool operator>(const Date& other);
    bool operator==(Date& other);
    int getDay();
    int getMonth();
    int getYear();
    QString tostr();
private:
    int year;
    int month;
    int day;
};

#endif // DATE_H
