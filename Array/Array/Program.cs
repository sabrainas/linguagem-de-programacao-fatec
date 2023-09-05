using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Arrays
{
    class Program
    {
        static void Main(string[] args)
        {
            //declaração de array
            int[] xpto;

            //atribuição de tamanho
            xpto = new int[10];

            //declaração com atribuição de tamanho
            int[] xpto1 = new int[10];

            //declaração com atribuição de lista de inicialização
            int[] xpto2 = { 10, 20, 30, 40 };

           //declaração de array com uso de variável de valor constante
            const int arraytam = 10;
            int[] xpto3 = new int[arraytam];

            //declaração de inicialização a partir da lista de matriz
            int[] array1 = new int[] { 1, 2, 3, 4, 5 };

            //propriedade de arrays
            int tam = xpto2.Length; //comprimento de uma matriz
            Console.WriteLine(tam);

            int dim = xpto2.Rank; //dimensão de uma matriz
            Console.WriteLine(dim);

            //uso do foreach - maneira simples e facil de fazer a iteração de matrizes
            foreach(int i in xpto2)
            {
                Console.WriteLine("{0}", i);
            }

            //procura um valor em um array
            int obj = 40;
            int valor = Array.BinarySearch(xpto2, obj);
            if(valor < 0)
            {
                Console.WriteLine("O objeto ({0}) nao foi encontrado", obj, valor);
            }
            else
            {
                Console.WriteLine("O objeto ({0}) esta no indice {1}", obj, valor);
            }

            //limpandos um conteudo de uma matriz
            Array.Clear(array1, 2, 1); //(nome do array, indice do elemento, qtd de elementos)
            foreach(int i in array1)
            {
                Console.WriteLine("({0})", i);
            }

            //copia os elementos de um array para outro
            Console.WriteLine("============copia de array==========");
            int[] array2 = new int[5];
            Array.Copy(array1, array2, 5);
            foreach(int i in array2)
            {
                Console.WriteLine("({0})", i);
            }
            Console.WriteLine("============fim copia de array==========");

            //classifica os elementos de uma matriz unidimensional
            int[] xpto4 = { 45, 10, 7, 9, 36, 48, 101, 56 };
            Array.Sort(xpto4);
            foreach(int i in xpto4)
            {
                Console.WriteLine("({0})", i);
            }

            Console.ReadKey();
        }
    }
}