using System.Net.Sockets;

namespace Lab5;

public class Airport
{
    private static Airport? _instance;
    private string _nameOfAirport;
    List<Ticket> _tickets;
    private List<Tarrif> _tarifs;
    private List<Passenger> _passengers; 
    private Airport()
    {
        _nameOfAirport = "StandartName";
        _tickets = new List<Ticket>();
        _tarifs = new List<Tarrif>();
        _passengers = new List<Passenger>();
    }

    public static Airport GetInstance()
    {
        if (_instance == null)
            _instance = new Airport();
        return _instance;
    }

    public void AddTicket(Ticket newTicket)
    {
        _tickets.Add(newTicket);
    }

    public void SellTicket(int numOfTicket, int numOfPassenger)
    {
        _passengers[numOfPassenger].AddTicket(_tickets[numOfTicket]);
    }

    public void AddPassenger(Passenger newPassenger)
    {
        _passengers.Add(newPassenger);
    }

    public double PriceOfSelled()
    {
        double summ = 0;
        foreach (var passenger in _passengers)
        {
            summ += passenger.GetPriceOfAll();
        }
        return summ;
    }

    public void AddTarrif(Tarrif newTarrif)
    {
        _tarifs.Add(newTarrif);
    }

    public List<Tarrif> Tarrifs => _tarifs;
    
    public List<Passenger> Passengers => _passengers;

    public List<Ticket> Tickets => _tickets;

    public string NameOfAirport
    {
        get => _nameOfAirport;
        set => _nameOfAirport = value ?? throw new ArgumentNullException(nameof(value));
    }
}