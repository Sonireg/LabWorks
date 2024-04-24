using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab7
{
    public class QuadraticEquation
    {
        private double _a;
        private double _b;
        private double _c;

        public QuadraticEquation(double a, double b, double c)
        {
            _a = a;
            _b = b;
            _c = c;
        }

        public double A
        {
            get => _a;
            set
            {
                if (value != 0)
                    _a = value;
                else
                    throw new ArgumentException("Коэффициент 'a' не может быть равен нулю.");
            }
        }

        public double B
        {
            get => _b;
            set => _b = value;
        }

        public double C
        {
            get => _c;
            set => _c = value;
        }

        public string FindRoots()
        {
            double discriminant = Math.Pow(_b, 2) - 4 * _a * _c;
            if (discriminant > 0)
            {
                double x1 = (-_b + Math.Sqrt(discriminant)) / (2 * _a);
                double x2 = (-_b - Math.Sqrt(discriminant)) / (2 * _a);
                return $"Два корня: x1 = {x1}, x2 = {x2}";
            }
            else if (discriminant == 0)
            {
                double x = -_b / (2 * _a);
                return $"Один корень: x = {x}";
            }
            else
            {
                return "Уравнение не имеет действительных корней";
            }
        }

        public override string ToString()
        {
            return $"{_a}x^2 + {_b}x + {_c} = 0";
        }

        public double this[int index]
        {
            get
            {
                switch (index)
                {
                    case 0:
                        return _a;
                    case 1:
                        return _b;
                    case 2:
                        return _c;
                    default:
                        throw new ArgumentOutOfRangeException("Индекс должен быть от 0 до 2");
                }
            }
            set
            {
                switch (index)
                {
                    case 0:
                        A = value;
                        break;
                    case 1:
                        _b = value;
                        break;
                    case 2:
                        _c = value;
                        break;
                    default:
                        throw new ArgumentOutOfRangeException("Индекс должен быть от 0 до 2");
                }
            }
        }
        public static bool operator ==(QuadraticEquation eq1, QuadraticEquation eq2)
        {
            return eq1._a == eq2._a && eq1._b == eq2._b && eq1._c == eq2._c;
        }

        public static bool operator !=(QuadraticEquation eq1, QuadraticEquation eq2)
        {
            return !(eq1 == eq2);
        }

        public static QuadraticEquation operator +(QuadraticEquation eq, int value)
        {
            return new QuadraticEquation(eq._a + value, eq._b + value, eq._c + value);
        }

        public static QuadraticEquation operator -(QuadraticEquation eq, int value)
        {
            return new QuadraticEquation(eq._a - value, eq._b - value, eq._c - value);
        }

        public static QuadraticEquation operator ++(QuadraticEquation eq)
        {
            return eq + 1;
        }

        public static QuadraticEquation operator --(QuadraticEquation eq)
        {
            return eq - 1;
        }

        public static QuadraticEquation operator +(QuadraticEquation eq1, QuadraticEquation eq2)
        {
            return new QuadraticEquation(eq1._a + eq2._a, eq1._b + eq2._b, eq1._c + eq2._c);
        }
        public static QuadraticEquation operator -(QuadraticEquation eq1, QuadraticEquation eq2)
        {
            return new QuadraticEquation(eq1._a - eq2._a, eq1._b - eq2._b, eq1._c - eq2._c);
        }

        public static QuadraticEquation operator *(QuadraticEquation eq, int value)
        {
            return new QuadraticEquation(eq._a * value, eq._b * value, eq._c * value);
        }

        public static QuadraticEquation operator /(QuadraticEquation eq, int value)
        {
            if (value == 0)
                throw new DivideByZeroException("Деление на ноль недопустимо.");
            return new QuadraticEquation(eq._a / value, eq._b / value, eq._c / value);
        }

        public static bool operator <(QuadraticEquation eq1, QuadraticEquation eq2)
        {
            return eq1._a < eq2._a && eq1._b < eq2._b && eq1._c < eq2._c;
        }

        public static bool operator >(QuadraticEquation eq1, QuadraticEquation eq2)
        {
            return eq1._a > eq2._a && eq1._b > eq2._b && eq1._c > eq2._c;
        }

        public static bool operator true(QuadraticEquation eq)
        {
            return eq.B * eq.B - 4 * eq.C * eq.A >= 0;
        }

        public static bool operator false(QuadraticEquation eq)
        {
            return eq.B * eq.B - 4 * eq.C * eq.A < 0;
        }

        public static explicit operator double(QuadraticEquation eq)
        {
            return eq._a;
        }

        public static explicit operator QuadraticEquation(double value)
        {
            return new QuadraticEquation(value, 0, 0);
        }
    }
}
