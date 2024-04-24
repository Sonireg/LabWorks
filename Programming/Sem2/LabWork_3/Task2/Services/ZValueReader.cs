namespace Task2.Services;

public static class ZValueReader
{
    public static void ReadZValue(ref double zVar)
    {
        Console.WriteLine("Введите значение переменной z:");
        bool zVarWasReaded = false;
        while (!zVarWasReaded)
        {
            try
            {
                zVar = double.Parse(Console.ReadLine() ?? string.Empty);
                zVarWasReaded = true;
            }
            catch
            {
                Console.WriteLine("Ошибка! Введите только одно действительное число:");
            }
        }
    }
}