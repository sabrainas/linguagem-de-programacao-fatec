using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Imposto
{
    class Program
    {
        static void Main(string[] args)
        {
            double salario, imposto = 0, salarioFinal = 0;
            int ano;
            Console.WriteLine("Digite o seu salário: ");
            salario = Double.Parse(Console.ReadLine());

            Console.WriteLine("Digite o seu tempo de serviço: ");
            ano = Int32.Parse(Console.ReadLine());

            if(salario < 200)
            {
                Console.WriteLine("Está isento de imposto");
            }
            else if(salario >= 200 && salario <= 450)
            {
                imposto = salario * 0.03;
            }
            else if (salario > 450 && salario <= 700)
            {
                imposto = salario * 0.08;
            }
            else
            {
                imposto = salario * 0.12;
            }

            if(salario > 500 && ano <= 3)
            {
                if(ano <= 3)
                {
                    salarioFinal = salario - imposto + 20;
                }else if(ano > 3)
                {
                    salarioFinal = salario - imposto + 30;
                }
            }

            if (salario <= 500 && ano <= 3)
            {
                salarioFinal = salario - imposto + 23;
                if(ano > 3 && ano <= 6)
                {
                    salarioFinal = salario - imposto + 35;
                }
                if (ano > 6)
                {
                    salarioFinal = salario - imposto + 33;
                }
            }

            if(salarioFinal <= 350)
            {
                Console.WriteLine("Categoria A");
            }
            else if(salarioFinal > 350 && salarioFinal < 600)
            {
                Console.WriteLine("Categoria B");
            }
            else
            {
                Console.WriteLine("Categoria C");
            }

            Console.WriteLine("Salario Incial: " + salario);
            Console.WriteLine("Imposto: -R$" + imposto);
            Console.WriteLine("O seu salario final é: " + salarioFinal);
            Console.ReadKey();
        }
    }
}