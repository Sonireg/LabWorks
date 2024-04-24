namespace Lab5;
public class Ticket
{
    public Tarrif SellingTarrif { get; set; }
    public string Dirrection { get; set; }

    public Ticket(double initPrice = 1, string initDirrection = "StandartSirection")
    {
        SellingTarrif = new Tarrif(initPrice);
        Dirrection = initDirrection;
    }

    public Ticket(Tarrif initTarif, string initDirrection = "StandartSirection")
    {
        SellingTarrif = initTarif;
        Dirrection = initDirrection;
    }
}