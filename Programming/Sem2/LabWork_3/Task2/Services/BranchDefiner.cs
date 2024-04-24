namespace Task2.Services;

public static class BranchDefiner
{
    public static double DecfineXValue(double zValue)
    {
        return zValue < 1 ? Math.Pow(zValue, 3) + 0.2 : zValue + Math.Log(zValue);
    }
}