namespace Lab4;

public class Ticket
{
    private double _price;
    private string _endOfRide;
    public Ticket()
    {
        _price = 10;
        _endOfRide = "StandartEnd";
    }
    public double Price
    {
        get => _price;
        set => _price = value;
    }

    public string EndOfRide
    {
        get => _endOfRide;
        set => _endOfRide = value ?? throw new ArgumentNullException(nameof(value));
    }
}