namespace Lab5;

public class Passenger
{
    private List<Ticket> _ownedTickets;
    private string _name;
    
    public Passenger(in string initName = "StandartName")
    {
        _ownedTickets = new List<Ticket>();
        _name = initName;
    }

    public void AddTicket(Ticket newTicket)
    {
        _ownedTickets.Add(newTicket);
    }

    public double GetPriceOfAll()
    {
        double summ = 0;
        foreach (var ticket in _ownedTickets)
        {
            summ += ticket.SellingTarrif.Price;
        }
        return summ;
    }

    public string Name => _name;
}