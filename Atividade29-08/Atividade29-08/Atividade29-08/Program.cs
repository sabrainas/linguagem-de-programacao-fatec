using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Atividade29_08
{
    class Program
    {
        static void Main(string[] args)
        {
            int opcao, aumento;
            double salario = 0, salarioFinal = 0, imposto = 0;

            do
            {
                Console.WriteLine("------------------------");
                Console.WriteLine("Selecione uma das opções abaixo: ");
                Console.WriteLine("1. Imposto");
                Console.WriteLine("2. Novo salário");
                Console.WriteLine("3. Classificação");
                Console.WriteLine("4. Finalização");
                Console.WriteLine("------------------------");
                opcao = Int32.Parse(Console.ReadLine());

                switch (opcao)
                {
                //receber o salario de um funcionário, calcular e mostrar o valor do imposto usando as regras a seguir
                    case 1:
                        Console.WriteLine("Informe o salário: ");
                        salario = Double.Parse(Console.ReadLine());

                        if(salario < 500)
                        {
                            Console.WriteLine("Descontará 5% de imposto");
                            imposto = salario * 0.05;
                            salarioFinal = salario - imposto;
                            Console.WriteLine("Novo salário: R$" + salarioFinal);
                        } else if(salario >= 500 && salario <= 850)
                        {
                            Console.WriteLine("Descontará 10% de imposto");
                            imposto = salario * 0.10;
                            salarioFinal = salario - imposto;
                            Console.WriteLine("Novo salário: R$" + salarioFinal);
                        }
                        else
                        {
                            Console.WriteLine("Descontará 15% de imposto");
                            imposto = salario * 0.15;
                            salarioFinal = salario - imposto;
                            Console.WriteLine("Novo salário: R$" + salarioFinal);
                        }
                        break;
                    
                    case 2:
                        Console.WriteLine("Informe o salário: ");
                        salario = Double.Parse(Console.ReadLine());

                        if(salario > 1500)
                        {
                            Console.WriteLine("Terá um aumento de R$25,00");
                            aumento = 25;
                            salarioFinal = salario + aumento;
                            Console.WriteLine("Novo salário: R$" + salarioFinal);
                        } else if(salario >= 750 && salario <= 1500)
                        {
                            Console.WriteLine("Terá um aumento de R$50,00");
                            aumento = 50;
                            salarioFinal = salario + aumento;
                            Console.WriteLine("Novo salário: R$" + salarioFinal);
                        } else if(salario >= 450 && salario < 750)
                        {
                            Console.WriteLine("Terá um aumento de R$75,00");
                            aumento = 25;
                            salarioFinal = salario + aumento;
                            Console.WriteLine("Novo salário: R$" + salarioFinal);
                        }else if(salario < 450)
                        {
                            Console.WriteLine("Terá um aumento de R$100,00");
                            aumento = 100;
                            salarioFinal = salario + aumento;
                            Console.WriteLine("Novo salário: R$" + salarioFinal);
                        }
                        break;

                    case 3:
                        Console.WriteLine("Informe o salário: ");
                        salario = Double.Parse(Console.ReadLine());

                        if(salario <= 750)
                        {
                            Console.WriteLine("Mal remunerado");
                        }
                        else
                        {
                            Console.WriteLine("Bem remunerado");
                        }
                        break;

                    default:
                        break;
                }
               
            } while (opcao != 4);


            Console.ReadKey();

        }
    }
}
