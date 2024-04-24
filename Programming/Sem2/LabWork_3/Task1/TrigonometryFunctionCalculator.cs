namespace Task1;

public class TrigonometryFunctionCalculator
{
    public static double CosXMinusSin2Y(double arg)
    {
        return Math.Cos(arg) - Math.Sin(2 * arg);
    }
    public static int DefineMinArg(double firstArg, double secondArg)
    {
        if (Math.Abs(CosXMinusSin2Y(firstArg) - CosXMinusSin2Y(secondArg)) < 0.00000000001)
        {
            return 0;
        }
        if (CosXMinusSin2Y(firstArg) < CosXMinusSin2Y(secondArg))
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
}