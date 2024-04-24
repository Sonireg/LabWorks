using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab6
{
    internal abstract class AbstractCar
    {
        private readonly int _stopSpeed = 10;
        public AbstractCar() 
        {
            Console.WriteLine("Создаётся абстрактная машина...");
        }
        public void Drive()
        {
            Console.WriteLine("Машина едет!");
        }
        virtual public void Stop()
        {
            Console.WriteLine($"Машина остановилась за {_stopSpeed} секунд!");
        }
        public abstract void Accelerate();
        public abstract void WriteMass();
    }
}
