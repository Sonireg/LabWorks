using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab6
{
    internal static class Demo
    {
        public static void Demonstrate()
        {
            Console.WriteLine("Демонстрация работы методов:");

            Truck truck = new Truck();
            truck.Accelerate();

            truck.Drive();

            truck.Stop();

            truck.WriteMass();

            truck.WriteMaxLoad();

            Car car = new Car();

            car.Accelerate();

            car.Drive();

            car.Stop();

            car.WriteMass();
        }
    }
}
