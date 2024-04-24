namespace Lab4;
public class Airport
{
    private static Airport? _instance;
    private int _amountOfSelledTickets;
    private string _nameOfAirport;
    private Ticket _ticket;
    private int _amountOfPlaces;
    private Airport()
    {
        _nameOfAirport = "StandartName";
        _ticket = new Ticket();
        _amountOfSelledTickets = 0;
        _ticket.Price = 0;
    }
    
    public static Airport? GetInstance()
    {
        if (_instance == null)
            _instance = new Airport();
        return _instance;
    }
    public void AddTickets(int amountOfAdded)
    {
        _amountOfPlaces += amountOfAdded;
    }
    public bool ChangeSelledTickets(int newAmountOfSelledTickets)
    {
        if (newAmountOfSelledTickets > _amountOfPlaces) return false;
        _amountOfSelledTickets = newAmountOfSelledTickets;
        return true;
    }
    public string NameOfAirport
    {
        get => _nameOfAirport;
        set => _nameOfAirport = value ?? throw new ArgumentNullException(nameof(value));
    }
    public void ChangePriceOfTickets(double newPrice)
    {
        _ticket.Price = newPrice;
    }
    public double PriceOfSoldTickets()
    {
        return _ticket.Price  * _amountOfSelledTickets;
    }

    public int AmountOfPlaces
    {
        get => _amountOfPlaces;
    }
}