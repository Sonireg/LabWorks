namespace Lab5;

public class Tarrif
{
    private double _price {set; get;}

    public Tarrif(double initPrice = 1)
    {
        _price = initPrice;
    }

    public double Price
    {
        get => _price;
    }
}