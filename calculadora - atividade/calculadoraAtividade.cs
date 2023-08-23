//Dados 2 valores calcule a soma, subtração, divisão e multiplicação dos mesmos

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace calculadora___atividade
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string n1, n2;
            float num1, num2, soma, sub, divisao, mult;

            Console.WriteLine("Digite o numero 1");
            n1 = Console.ReadLine();

            Console.WriteLine("Digite o numero 2");
            n2 = Console.ReadLine();

            num1 = float.Parse(n1);
            num2 = float.Parse(n2);

            soma = num1 + num2;
            sub = num1 - num2;  
            divisao = num1 / num2;
            mult = num1 * num2;

            Console.WriteLine($"Soma: {soma}");
            Console.WriteLine($"Subtração: {sub}");
            Console.WriteLine($"Divisão: {divisao:F2}");
            Console.WriteLine($"Multiplicação: {mult}");
        }
    }
}
