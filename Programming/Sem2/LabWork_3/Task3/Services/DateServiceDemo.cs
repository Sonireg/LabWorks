namespace Task3;

public abstract class DateServiceDemo
{
    public static void DefineDay()
    {
        Console.WriteLine("Проверка определения дня недели по дате в строковом формате. Введите дату в формате ДД.ММ.ГГГГ");
        string dayOfWeek;
        while (true)
        {
            dayOfWeek = DateService.GetDay(Console.ReadLine() ?? string.Empty);
            if (dayOfWeek != "Ошибка! Введите корректную дату:")
            {
                break;
            }
        }
        Console.WriteLine($"День недели данной даты на английском: {dayOfWeek}");
    }

    public static void DefineSpan()
    {
        Console.WriteLine("Проверка определения количества дней до текущей даты по дате в формате трёх отдельных чисел");
        int day = 0, month = 0, year = 0;
        DayMonthYearIntReader.Read(ref day, ref month, ref year);
        int span = DateService.GetDaysSpan(day, month, year);
        while (span == -1)
        {
            DayMonthYearIntReader.Read(ref day, ref month, ref year);
            span = DateService.GetDaysSpan(day, month, year);
            Console.WriteLine("Введите корректную дату");
        }
        Console.WriteLine($"Количество дней от текущей даты: {span}");
    }
}