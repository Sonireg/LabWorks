namespace Task1;

public static class ArgsReader
{
    public static void ReadDoubleValues(ref double val1, ref double val2)
    {
        bool valuesReaden = false;
        Console.WriteLine("Введите два действительных числа разделяя их Enter:");
        while (!valuesReaden)
        {
            try
            {
                val1 = double.Parse(Console.ReadLine() ?? string.Empty);
                val2 = double.Parse(Console.ReadLine() ?? string.Empty);
                valuesReaden = true;
            }
            catch
            {
                Console.WriteLine("Ошибка! Введите только действительные числа разделяя их Enter:");
            }
        }
    }
}