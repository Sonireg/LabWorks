namespace Task3;

public abstract class DayMonthYearIntReader
{
    public static void Read(ref int day, ref int month, ref int year)
    {
        Console.WriteLine("Введите день:");
        while (!int.TryParse(Console.ReadLine(), out day))
        {
            Console.WriteLine("Введите корректный день:");    
        }
        Console.WriteLine("Введите номер месяца:");
        while (!int.TryParse(Console.ReadLine(), out month))
        {
            Console.WriteLine("Введите корректный номер месяца:");    
        }
        Console.WriteLine("Введите год:");
        while (!int.TryParse(Console.ReadLine(), out year))
        {
            Console.WriteLine("Введите корректный год:");    
        }
    }
}