using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace soma___atividade
{
    class Program
    {
        static void Main(string[] args)
        {
            string num1, num2, num3, num4;
            int n1, n2, n3, n4, soma;

            Console.WriteLine("Entre com o primeiro valor");
            num1 = Console.ReadLine();

            Console.WriteLine("Entre com o segundo valor");
            num2 = Console.ReadLine();

            Console.WriteLine("Entre com o terceiro valor");
            num3 = Console.ReadLine();

            Console.WriteLine("Entre com o quarto valor");
            num4 = Console.ReadLine();

            n1 = Int32.Parse(num1);
            n2 = Int32.Parse(num2);
            n3 = Int32.Parse(num3);
            n4 = Int32.Parse(num4);

            soma = n1 + n2 + n3 + n4;
            Console.WriteLine("A soma entre os 4 numeros digitados é: " + soma);
            Console.ReadLine();
        }
    }
}
