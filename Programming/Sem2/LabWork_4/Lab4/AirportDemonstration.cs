namespace Lab4;

public static class AirportDemonstration
{
    public static void Demo()
    {
        DemoInitialization();
        DemoPriceChange();
        DemoSeatsAmountAdding();
        DemoSelledAmountAdding();
        bool programmStopped = false;
        while (true)
        {
            Console.WriteLine("Если хотите изменить количество проданных билетов, введите 1." +
                              "\nЕсли хотите изменить цену билета введите 2." +
                              "\nЕсли хотите изменить количество имеющихся билетов введите 3." +
                              "\nЕсли хотите узнать суммарную стоимость всех проданых билетов введите 4." +
                              "\nЧтобы завершить выполнение программы введите 5.");
            int typeOfOperation = 0;
            while (!int.TryParse(Console.ReadLine(), out typeOfOperation) && 
                   !(typeOfOperation == 1 || typeOfOperation == 2 || typeOfOperation == 3 || typeOfOperation == 4))
            {
                Console.WriteLine("Неверный ввод! Введите корректный номер операции:");
            }
            
            switch (typeOfOperation)
            {
                case 1:
                    DemoSelledAmountAdding();
                    break;
                case 2:
                    DemoPriceChange();
                    break;
                case 3:
                    DemoSeatsAmountAdding();
                    break;
                case 4:
                    Console.WriteLine($"Суммарная цена проданных билетов: {Airport.GetInstance().PriceOfSoldTickets()}");
                    break;
                case 5:
                    programmStopped = true;
                    break;
            }

            if (programmStopped) break;
        }
    }

    private static void DemoInitialization()
    {
        Console.WriteLine("Введите название аэропорта:");
        Airport.GetInstance().NameOfAirport = Console.ReadLine() ?? String.Empty;
    }

    private static void DemoPriceChange()
    {
        Console.WriteLine("Введите цену за билет:");
        double price;
        while (!double.TryParse(Console.ReadLine(), out price))
        {
            Console.WriteLine("Неверный ввод! Введите цену за билет:");
        }
        Airport.GetInstance().ChangePriceOfTickets(price);
    }

    private static void DemoSeatsAmountAdding()
    {
        Console.WriteLine($"Введите количество добавляемых свободных мест (текущее количество мест {Airport.GetInstance().AmountOfPlaces}):");
        int amountOfSeats = 0;
        while (!int.TryParse(Console.ReadLine(), out amountOfSeats) || amountOfSeats <= 0)
        {
            Console.WriteLine("Неверный ввод! Введите количество добавленных мест:");
        }
        Airport.GetInstance().AddTickets(amountOfSeats);
    }
    
    private static void DemoSelledAmountAdding()
    {
        Console.WriteLine("Введите новое количество проданных билетов:");
        int amountOfSelled = -1;
        while (!int.TryParse(Console.ReadLine(), out amountOfSelled) || amountOfSelled <= 0 
               || !Airport.GetInstance().ChangeSelledTickets(amountOfSelled))
        {
            Console.WriteLine("Неверный ввод! Введите новое количество проданных билетов:");
        }
    }
}