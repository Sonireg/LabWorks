using System.Runtime.InteropServices.JavaScript;

namespace Task3;

public static class DateService
{
    public static string GetDay(string date)
    {
        try
        {
            DateTime parsedDate = DateTime.Parse(date);
            return parsedDate.DayOfWeek.ToString();
        }
        catch (FormatException)
        {
            return "Ошибка! Введите корректную дату:";
        }
    }
    public static int GetDaysSpan(int day, int month, int year)
    {
        try
        {
            DateTime targetDate = new DateTime(year, month, day);
            TimeSpan span = DateTime.Now - targetDate;
            return span.Days;
        }
        catch (ArgumentOutOfRangeException)
        {
            return -1;
        }
    }
}