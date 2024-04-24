using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab6
{
    internal class Car : AbstractCar
    {
        private readonly int _mass = 5;
        private readonly int _acceleration = 10;
        public Car()
        {
            Console.WriteLine("Создаётся легковушка...");
        }
        public override void Accelerate()
        {
            Console.WriteLine($"Легковушка усоряется на {_acceleration} км/ч");
        }
        public override void WriteMass()
        {
            Console.WriteLine($"Масса легковушки - {_mass} тонн");
        }

        public int Mass {  get { return _mass; } }
    }
}
