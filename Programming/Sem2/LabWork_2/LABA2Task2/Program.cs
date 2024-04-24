while (true)
{
    double x = 0, y = 0 ;
    
    bool varReaden = false;
    while (!varReaden)
    {
        try
        {
            Console.WriteLine("Введите координату x точки:");
            x = double.Parse(Console.ReadLine() ?? string.Empty);
            Console.WriteLine("Введите координату y точки:");
            y = double.Parse(Console.ReadLine() ?? string.Empty);
            varReaden = true;
        }
        catch
        {
            Console.WriteLine("Слишком большое число или строка вместо числа");
        }
    }
    

    double distanceFromCenterSquared = x * x + y * y;
    
    if (distanceFromCenterSquared < 100 && distanceFromCenterSquared > 25 && y > 0) Console.WriteLine("Да");
    else if (((distanceFromCenterSquared == 100 || distanceFromCenterSquared == 25) && y >= 0) ||
             (distanceFromCenterSquared >= 25 && distanceFromCenterSquared <= 100 && y == 0)) Console.WriteLine("На границе");
    else Console.WriteLine("Нет");
    
    bool wasStopped = false, answerGetted = false;
    Console.WriteLine("Введите Да, если хотите п родолжить или Нет, чтобы завершить выполнение программы");
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