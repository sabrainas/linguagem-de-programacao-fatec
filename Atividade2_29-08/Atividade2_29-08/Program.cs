using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Atividade2_29_08
{
    internal class Program
    {
        static void Main(string[] args)
        {
            String cpf;
            int numDependentes;
            double rendaMensal =0, salarioMinimo = 1320, descDependentes = 0.05, salarioMinNovo = 0, aliquota = 0, salarioImposto =0;

            
            Console.Write("Digite o seu CPF: ");
            cpf = Console.ReadLine();

            Console.Write("Digite o número de dependentes: ");
            numDependentes = Int32.Parse(Console.ReadLine());

            Console.WriteLine("Digite a sua renda mensal: ");
            rendaMensal = Double.Parse(Console.ReadLine());

            if (numDependentes > 0)
            {

                double descontoDependentes = numDependentes * (salarioMinimo * descDependentes);
                salarioMinNovo = rendaMensal - descontoDependentes;

                Console.WriteLine("O salario com desconto de dependentes: " + salarioMinNovo);
            }

            if (salarioMinNovo <= 2 * salarioMinimo)
            {
                aliquota = 0.0;
                Console.WriteLine("Isento");
            }
            else if (salarioMinNovo <= 3 * salarioMinimo)
            {
                aliquota = 0.05;
                Console.WriteLine("Alíquota: 5%");
            }else if (salarioMinNovo <= 5 * salarioMinimo)
            {
                aliquota = 0.10;
                Console.WriteLine("Alíquota: 10%");
            }else if (salarioMinNovo <= 7 * salarioMinimo)
            {
                aliquota = 0.15;
                Console.WriteLine("Alíquota: 15%");
            }else
            {
                aliquota = 0.20;
                Console.WriteLine("Alíquota: 20%");
            }

            salarioImposto = salarioMinNovo * aliquota;

            Console.WriteLine("CPF: " + cpf);
            Console.WriteLine("Imposto de renda: " + salarioImposto);
            Console.WriteLine("-----------------------------------");
            Console.ReadKey();
        }
    }
}
