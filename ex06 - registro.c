/*Faça um programa que realize o cadastro de contas bancárias com as seguintes informações: número  da conta, nome do cliente e saldo. O banco permitirá o cadastramento de apenas 15 contas e não poderá haver mais que uma conta com o mesmo número. Crie o menu de opções a seguir.  Menu de opções:  
1. Cadastrar contas.  
2. Visualizar todas as contas de determinado cliente.  
3. Excluir a conta com menor saldo (supondo a não existência de saldos iguais).  
4. Sair */
#include <stdio.h>
#include <string.h>
#include <locale.h>

struct CADASTRO{

    char nome[50];
    int usuario;
    float saldo;

};

void exibirConta(struct CADASTRO contas[], int qtdContas){

    int i;
    printf("Contas registradas: \n");
    
    for(i = 0; i < qtdContas; i++){
        printf("Nome: %s\n", contas[i].nome);
        printf("Número da conta: %d\n", contas[i].usuario);
        printf("Saldo: %0.2f\n", contas[i].saldo);
        printf("\n");
    }
    
    printf("------------------------------------\n");
}


int main(){

    struct CADASTRO contas[15];
    int i, opcao, registro, qtdContas = 0, menorSaldo;
    float menor;

    do{
        printf("Escolha uma das opcões\n");
        printf("1. Cadastrar contas. \n");
        printf("2. Visualizar todas as contas de determinado cliente.  \n");
        printf("3. Excluir a conta com menor saldo. \n");
        printf("4. Sair\n");
        scanf("%d", &opcao);

        switch (opcao){

            //Cadastrar contas.
            case 1:
                if(qtdContas < 15){
                    printf("Digite o nome do cliente: ");
                    scanf("%s", contas[qtdContas].nome);

                    printf("Digite o numero da conta: ");
                    scanf("%d", &contas[qtdContas].usuario);

                    printf("Digite o saldo da conta: ");
                    scanf("%f", &contas[qtdContas].saldo);
                   
                    qtdContas++;
                   
                    printf("\n");
                    
                }
                exibirConta(contas, qtdContas);
                break;

            //Visualizar todas as contas de determinado cliente.
            case 2: 
                printf("Digite o numero da conta do usuario: ");
                scanf("%d", &registro);

                for(i = 0; i < qtdContas; i++){
                    if(registro == contas[i].usuario){
                        printf("--------------------------\n");
                        printf("Nome: %s\n", contas[i].nome);
                        printf("Saldo: %0.2f\n", contas[i].saldo);
                        printf("-------------------------\n");
                    }
                }
                break;
            
            //Excluir a conta com menor saldo (supondo a não existência de saldos iguais).
            case 3:
                menor = contas[0].saldo;
                menorSaldo = 0;

                //encontrar conta com o menor saldo
                for(i = 0; i < qtdContas; i++){
                    if(contas[i].saldo < menor){
                        menor = contas[i].saldo;
                        menorSaldo = i;
                    }
                }

                //remover a conta
                for(i = menorSaldo; i < qtdContas; i++){
                    contas[i] = contas[i + 1];
                }

                qtdContas--;
                
                exibirConta(contas, qtdContas);
                printf("Conta excluída com sucesso! \n");
                break;
            
            default:
            break;
        }
    }while (opcao != 4);

    printf("Você encerrou o programa");

    return 0;
}