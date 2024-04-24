using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab7
{
    internal static class Demo
    {
        public static void Demonstrate()
        {
            QuadraticEquation eq1 = new QuadraticEquation(1, -3, 2);
            QuadraticEquation eq2 = new QuadraticEquation(2, 5, -3);

            Console.WriteLine("Уравнение 1: " + eq1);
            Console.WriteLine("Уравнение 2: " + eq2);

            Console.WriteLine("Корни уравнения 1: " + eq1.FindRoots());
            Console.WriteLine("Корни уравнения 2: " + eq2.FindRoots());

            Console.WriteLine("Уравнение 1 равно уравнению 2: " + (eq1 == eq2));

            QuadraticEquation eq3 = eq1 + eq2;
            QuadraticEquation eq4 = eq1 - eq2;
            QuadraticEquation eq5 = eq1 * 2;
            QuadraticEquation eq6 = eq2 / 2;
            QuadraticEquation eq7 = ++eq1;
            QuadraticEquation eq8 = --eq2;

            Console.WriteLine("Результат сложения: " + eq3);
            Console.WriteLine("Результат вычитания: " + eq4);
            Console.WriteLine("Результат умножения: " + eq5);
            Console.WriteLine("Результат деления: " + eq6);
            Console.WriteLine("Результат инкремента для уравнения 1: " + eq7);
            Console.WriteLine("Результат декремента для уравнения 2: " + eq8);

            double a = (double)eq1;
            QuadraticEquation eq9 = (QuadraticEquation)5.0;

            Console.WriteLine("Преобразование типа double: " + a);
            Console.WriteLine("Преобразование типа double в уравнение: " + eq9);

            if (eq1)
                Console.WriteLine("Уравнение 1 имеет действительные корни.");
            else
                Console.WriteLine("Уравнение 1 не имеет действительных корней.");

            if (eq2)
                Console.WriteLine("Уравнение 2 имеет действительные корни.");
            else
                Console.WriteLine("Уравнение 2 не имеет действительных корней.");
        }
    }
}
