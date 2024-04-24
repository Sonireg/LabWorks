while (true)
{
    int n = 0;
    bool nIsReaden = false;
    while (!nIsReaden)
    {
        try
        {
            Console.WriteLine("Введите натуральное число в десятичн:");
            n = int.Parse(Console.ReadLine() ?? string.Empty);
            if (n > 0) nIsReaden = true;
            else Console.WriteLine("Введите положительное число");
        }
        catch
        {
            Console.WriteLine("Слишком большое число или строка вместо числа");
        }
    }
    
    if (n % 10 == 7) Console.WriteLine("Число оканчивается 7");
    else Console.WriteLine("Число не оканчивается на 7");
    
    bool wasStopped = false, answerGetted = false;
    Console.WriteLine("Введите Да, если хотите продолжить или Нет, чтобы завершить выполнение программы");
    while (!answerGetted)
    {
        switch (Console.ReadLine())
        {
            case "Да":
                answerGetted = true;
                break;
            case "Нет":
                answerGetted = true;
                wasStopped = true;
                break;
            default:
                Console.WriteLine("Введите Да, если хотите продолжить или Нет, чтобы завершить выполнение программы");
                break;
        }
    }
    
    if (wasStopped) break;
}