using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NumeroPar
{
    class Program
    {
        static void Main(string[] args)
        {
            int num;

            Console.WriteLine("Digite um numero: ");
            num = Int32.Parse(Console.ReadLine());

            if(num % 2 == 0)
            {
                Console.WriteLine("O numero é par");
            }
            else
            {
                Console.WriteLine("O numero é impar");
            }

            Console.ReadKey();
        }
    }
}
