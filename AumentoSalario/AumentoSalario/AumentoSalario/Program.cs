using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AumentoSalario
{
    class Program
    {
        static void Main(string[] args)
        {
            int codigo;
            double salario, aumento, salarioFinal;

            Console.WriteLine("Digite um numero de 1 a 5 ");
            codigo = Int16.Parse(Console.ReadLine());

            Console.WriteLine("Digite o salário do funcionário: ");
            salario = Double.Parse(Console.ReadLine());

            if (codigo == 1)
            {
                Console.WriteLine("Cargo: Escrituário\nPercentual de aumento: 50%");
                aumento = salario * 0.5;
                salarioFinal = salario + aumento;

                Console.WriteLine("Salário Final: " + salarioFinal); 
            }
            if(codigo == 2)
            {
                Console.WriteLine("Cargo: Secretário\nPercentual de aumento: 35%");
                aumento = salario * 0.35;
                salarioFinal = salario + aumento;

                Console.WriteLine("Salário Final: " + salarioFinal);
            }
            if (codigo == 3)
            {
                Console.WriteLine("Cargo: Caixa\nPercentual de aumento: 20%");
                aumento = salario * 0.20;
                salarioFinal = salario + aumento;

                Console.WriteLine("Salário Final: " + salarioFinal);
            }
            if (codigo == 4)
            {
                Console.WriteLine("Cargo: Caixa\nPercentual de aumento: 10%");
                aumento = salario * 0.10;
                salarioFinal = salario + aumento;

                Console.WriteLine("Salário Final: " + salarioFinal);
            }
            if (codigo == 5)
            {
                Console.WriteLine("Cargo: Diretor\nPercentual de aumento: Não tem aumento");
                aumento = salario * 0;
                salarioFinal = salario + aumento;

                Console.WriteLine("Salário Final: " + salarioFinal);
            }
            Console.ReadKey();
        }
    }
}
