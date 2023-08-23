using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Opcoes
{
    class Program
    {
        static void Main(string[] args)
        {
            int opcao, num1, num2, soma;
            double num, raizQuad;
            Console.WriteLine("1.Somar dois números.\n2.Raiz quadrada de um número.");
            opcao = Int16.Parse(Console.ReadLine());

            if(opcao == 1)
            {
                Console.WriteLine("Digite um numero");
                num1 = Int32.Parse(Console.ReadLine());

                Console.WriteLine("Digite outro numero");
                num2 = Int32.Parse(Console.ReadLine());

                soma = num1 + num2;

                Console.WriteLine("A soma dos dois numeros digitados é: " + soma);
            }

            if(opcao == 2)
            {
                Console.WriteLine("Digite um numero: ");
                num = Double.Parse(Console.ReadLine());

                raizQuad = Math.Sqrt(num);

                Console.WriteLine("A raiz quadrada de " + num + " é igual a: " + raizQuad);
            }
            Console.ReadKey();
        }
    }
}
