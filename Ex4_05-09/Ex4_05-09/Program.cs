using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml;

//Faça um programa que preencha uma matriz 20 x 10 com números inteiros, e some cada uma das colunas, armazenando o resultado da soma em um vetor. A seguir, o programa deverá multiplicar cada elemento da matriz pela soma da coluna e mostrar a matriz resultante.

namespace Ex4_05_09
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[,] matriz = new int[20, 10];
            int[] soma = new int[10]; 

            Console.WriteLine("Complete a matriz com numeros inteiros");
            Console.WriteLine("-------------------------------------------");

            //preenchendo a matriz e somando as colunas
            for(int i = 0; i < 20; i++)
            {
                for(int j = 0; j < 10; j++)
                {
                    Console.WriteLine($"Linha {i + 1}, Coluna {j + 1}\nValor: ");
                    matriz[i, j] = int.Parse(Console.ReadLine());
                    soma[j] += matriz[i, j];
                }
            }

            Console.WriteLine("-------------------------------------------");
            Console.WriteLine("Resultados da soma das colunas:");
            for (int j = 0; j < 10; j++)
            {
                Console.WriteLine($"Soma da coluna {j + 1}: {soma[j]}");
            }

            for(int i = 0; i < 20; i++)
            {
                for( int j = 0;j < 10; j++)
                {
                    matriz[i, j] *= soma[j];
                }
            }

            for (int i = 0; i < 20; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    Console.WriteLine($"A multiplicação da soma das matrizes é: {matriz[i, j]}");
                }
                Console.WriteLine();
            }
            Console.ReadKey();
        }
    }
}
