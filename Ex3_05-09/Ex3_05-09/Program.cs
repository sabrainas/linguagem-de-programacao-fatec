using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

//escrever um algoritmo que entre com dados em um vetor de 10 posições e apresente a soma de todos os valores no final
namespace Ex3_05_09
{
    class Program
    {
        static void Main(string[] args)
        {
     
            Console.WriteLine("Entre com 10 valores");
            int soma = 0;
            int[] x = new int[10];
            for(int i = 0; i < 10; i++)
            {
                Console.Write("Valor {0}: ", i + 1);
                x[i] = int.Parse(Console.ReadLine());
                soma += x[i];
            }

            Console.WriteLine("A soma dos numeros digitados é: {0}", soma);

            Console.ReadKey();
        }
    }
}
