namespace Task2.Services;

public static class Solver
{
    public static void StartSolution()
    {
        Console.WriteLine("Данная программа предназначена для вычисления значения сложной математической формулы, соответсвующей варианту.");
        double zVar = 0;
        ZValueReader.ReadZValue(ref zVar);
        double xVar = BranchDefiner.DecfineXValue(zVar);
        Console.WriteLine($"Вычисленное значение: {Function.CosCubeXSquaerdPlusSinusSquaredXCubed(xVar)}");
        if (zVar < 1)
        {
            Console.WriteLine("Вычисление происходило в ветке 1, где z < 1");
        }
        else
        {
            Console.WriteLine("Вычисление происходило в ветке 2, где z >= 1");
        }
    }
}