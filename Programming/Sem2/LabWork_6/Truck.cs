using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab6
{
    internal sealed class Truck : AbstractCar
    {
        private readonly int _mass = 20;
        private readonly int _maxLoad = 50;
        public Truck()
        {
            Console.WriteLine("Создаётся грузовик...");
        }
        public override void Stop()
        {
            Console.WriteLine($"Грузовик остановился за 20 секунд!");
        }
        public override void Accelerate()
        {
            Console.WriteLine($"Грузовик ускоряется!");
        }

        public override void WriteMass()
        {
            Console.WriteLine($"Масса грузовика - {_mass} тонн");
        }
        public void WriteMaxLoad()
        {
            Console.WriteLine($"Максимальная загрузка грузовика - {_maxLoad} тонн");
        }
        public int MaxLoad {  get { return _maxLoad; }}
    }
}
