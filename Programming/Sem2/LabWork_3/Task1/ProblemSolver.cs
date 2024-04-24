namespace Task1;

public static class ProblemSolver
{
    public static void Solve()
    {
        Console.WriteLine("Даная программа предназначнена для определения, в какой из двух точек функция f(x) = cos(x)-sin(2x) принимает меньшее значение");
        double firstInput = 0, secondInput = 0;
        ArgsReader.ReadDoubleValues(ref firstInput, ref secondInput);
        AnsWriter.WriteMinArgWith(firstInput, secondInput);
    }
}