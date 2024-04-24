namespace Lab5;

public static class AirportDemo
{
    public static void Demo()
    {
        Console.WriteLine("1 - Добавить тариф" +
                          "\n2 - Добавить пассажира" +
                          "\n3 - Продать билет" +
                          "\n4 - Добавить билет" +
                          "\n5 - Цена всех проданных билетов" +
                          "\n6 - Цена всех билетов пассажира" +
                          "\n7 - Закончить");
        string? type;
        bool continued = true;
        while (continued)
        {
            type = Console.ReadLine();
            switch (type)
            {
                case "1":
                    AddTarifDemo();
                    break;
                case "2":
                    AddPassengerDemo();
                    break;
                case "3":
                    if (Airport.GetInstance().Passengers.Count == 0 || Airport.GetInstance().Tickets.Count == 0)
                    {
                        Console.WriteLine("Нет пассажиров или билетов!");
                        break;
                    }
                    SellTicketDemo();
                    break;
                case "4":
                    if (Airport.GetInstance().Tarrifs.Count == 0)
                    {
                        Console.WriteLine("Нет тарифов!");
                        break;
                    }
                    AddTicketDemo();
                    break;
                case "5":
                    Console.WriteLine($"Цена проданых билетов - {Airport.GetInstance().PriceOfSelled()}");
                    break;
                case "6":
                    if (Airport.GetInstance().Passengers.Count == 0)
                    {
                        Console.WriteLine("Нет пассажиров!");
                        break;
                    }
                    Console.WriteLine("Список пассажиров:");
                    foreach (var passenger in Airport.GetInstance().Passengers)
                    {
                        Console.WriteLine(passenger.Name);
                    }
                    int numOfPassenger;
                    Console.WriteLine("Введите номер пассажира:");
                    while (!int.TryParse(Console.ReadLine(), out numOfPassenger) || numOfPassenger > Airport.GetInstance().Passengers.Count - 1 
                           || numOfPassenger < 0)
                    {
                        Console.WriteLine("Неверный ввод! Введите номер пассажира:");
                    }
                    Console.WriteLine($"Цена билетов, купленных пассажиром - {Airport.GetInstance().Passengers[numOfPassenger].GetPriceOfAll()}");
                    break;
                case "7":
                    continued = false;
                    break;
                default:
                    Console.WriteLine("Введите корректный тип операции!");
                    break;
            }
        }
    }

    private static void AddTarifDemo()
    {
        double newTarrifPrice = 0;
        Console.WriteLine("Введите цену нового тарифа (руб/км):");
        while (!double.TryParse(Console.ReadLine(), out newTarrifPrice)) Console.WriteLine("Неверный ввод! Введите корректную ецену тарифа:");
       Airport.GetInstance().AddTarrif(new Tarrif(newTarrifPrice));
        Console.WriteLine("Тариф успешно добавлен");
    }

    private static void AddPassengerDemo()
    {
        Console.WriteLine("Введите паспортные данные пассажира:");
        Airport.GetInstance().AddPassenger(new Passenger(Console.ReadLine()));
        Console.WriteLine("Пассажир успешно добавлен!");
    }

    private static void SellTicketDemo()
    {
        Console.WriteLine("Список пассажиров:");
        foreach (var passenger in Airport.GetInstance().Passengers)
        {
            Console.WriteLine(passenger.Name);
        }
        Console.WriteLine("Список билетов:");
        foreach (var ticket in Airport.GetInstance().Tickets)
        {
            Console.WriteLine(ticket.Dirrection);
            Console.WriteLine(ticket.SellingTarrif.Price);
        }
        Console.WriteLine("Введите номер билета и номер пассажира, которому хотите его продать:");
        int numOfPassenger;
        while (!int.TryParse(Console.ReadLine(), out numOfPassenger) || numOfPassenger > Airport.GetInstance().Passengers.Count - 1 
                                                                     || numOfPassenger < 0)
        {
            Console.WriteLine("Неверный ввод! Введите номер пассажира:");
        }

        int numOfTicket;
        while (!int.TryParse(Console.ReadLine(), out numOfTicket) || numOfTicket > Airport.GetInstance().Tickets.Count - 1 
                                                                  || numOfTicket < 0)
        {
            Console.WriteLine("Неверный ввод! Введите номер билета:");
        }
        Airport.GetInstance().SellTicket(numOfTicket, numOfPassenger);
        Console.WriteLine("Билет продан!");
    }
    
    private static void AddTicketDemo()
    {
        Console.WriteLine("Список тарифов:");
        foreach (var tarif in Airport.GetInstance().Tarrifs)
        {
            Console.WriteLine(tarif.Price);
        }
        Console.WriteLine("Введите номер тарифа для нового билета");
        int numOfTarif;
        while (!int.TryParse(Console.ReadLine(), out numOfTarif) || numOfTarif > Airport.GetInstance().Tarrifs.Count - 1 
                                                                 || numOfTarif < 0)
        {
            Console.WriteLine("Неверный ввод! Введите номер тарифа:");
        }
        Airport.GetInstance().AddTicket(new Ticket(Airport.GetInstance().Tarrifs[numOfTarif]));
        Console.WriteLine("Билет добавлен!");
    }
}