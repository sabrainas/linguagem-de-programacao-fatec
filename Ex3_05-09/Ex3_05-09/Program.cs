using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

// Faça um programa que preencha uma matriz M (2 x 2), calcule e mostre a matriz R, resultante da multiplicação dos elementos de M pelo seu maior elemento.
namespace Ex3_05_09
{
    class Program
    {
        static void Main(string[] args)
        {
            int[,] matriz = new int[2, 2];
            int num = 0;
            Console.WriteLine("Digite valores inteiros para a matriz");
            Console.WriteLine("-----------------------------------------");

            //Preenchendo a matriz
            for (int i = 0; i < 2; i++)
            {
                for(int j = 0; j < 2; j++)
                {
                    Console.WriteLine($"Linha {i}, Coluna {j}\nValor: ");
                    matriz[i, j] = Int32.Parse(Console.ReadLine());
                }
            }

            //Encontrando o maior valor
            int maiorElemento = matriz[0, 0];
            for(int i = 0; i < 2; i++)
            {
                for(int j = 0; j < 2; j++)
                {
                    if (matriz[i, j] > maiorElemento)
                    {
                        maiorElemento = matriz[i, j];
                    }
                }
            }
            Console.WriteLine("-------------------------------------------------");
            Console.WriteLine($"O maior elemento digitado é: {maiorElemento}");
            Console.WriteLine("--------------------------------------------------");

            //matriz resultante
            int[,] matrizR = new int[2, 2];
            for(int i = 0; i < 2; i++)
            {
                for(int j = 0; j < 2; j++)
                {
                    matrizR[i, j] = matriz[i, j] * maiorElemento;
                }
            }

            for(int i = 0;  i < 2; i++)
            {
                for(int j = 0; j < 2; j++)
                {
                    Console.WriteLine($"Linha {i}, Coluna {j}\nValor Atual: {matrizR[i, j]}");
                }
            }
            Console.ReadKey();
        }
    }
}
