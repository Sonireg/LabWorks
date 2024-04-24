namespace Task2.Services;

public static class Function
{
    public static double CosCubeXSquaerdPlusSinusSquaredXCubed(double xValue)
    {
        return Math.Pow(Math.Cos(Math.Pow(xValue, 2)), 3) + Math.Pow(Math.Sin(Math.Pow(xValue, 3)), 2);
    }
}