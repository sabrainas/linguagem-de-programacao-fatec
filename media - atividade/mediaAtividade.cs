// Faça um programa que receba três notas, calcule e mostre a média aritmética.

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace media___atividade
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string n1, n2, n3;
            double nota1, nota2, nota3, media;

            Console.WriteLine("Digite a sua nota 1");
            n1 = Console.ReadLine();

            Console.WriteLine("Digite a sua nota 2");
            n2 = Console.ReadLine();

            Console.WriteLine("Digite a sua nota 3");
            n3 = Console.ReadLine();

            nota1 = Double.Parse(n1);
            nota2 = Double.Parse(n2);
            nota3 = Double.Parse(n3);

            media = (nota1 + nota2 + nota3) / 3;
            Console.WriteLine(media);
            Console.ReadLine();
        }
    }
}
