namespace Task1;

public static class AnsWriter
{
    public static void WriteMinArgWith(double firstInput, double secondInput)
    {
        Console.WriteLine($"f({firstInput})={TrigonometryFunctionCalculator.CosXMinusSin2Y(firstInput)}");
        Console.WriteLine($"f({secondInput})={TrigonometryFunctionCalculator.CosXMinusSin2Y(secondInput)}");
        switch (TrigonometryFunctionCalculator.DefineMinArg(firstInput, secondInput))
        {
            case 0:
                Console.WriteLine("Значения функции равны!");
                return;
            case 1:
                Console.WriteLine($"Функция принимает меньшее значение при x = {firstInput}.");
                return;
            case 2:
                Console.WriteLine($"Функция принимает меньшее значение при x = {secondInput}.");
                return;
        }
    }
}