#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct CADASTRO{
    char cliente[100];
    int conta;
    float saldo;
};

int main(){

    struct CADASTRO contas[3][3];
    int i, opcao;
    i = 0;

    printf("1. Cadastrar contas\n");
    printf("2. Visualizar todas as contas de determinado cliente\n");
    printf("3. Excluir a conta com menor saldo (supondo a não existência de saldos iguais)\n");
    printf("4. Sair\n");
    scanf("%d", &opcao);

    for(i = 0; i < 3; i++){
        if(opcao == 1){

            puts("Digite o nome do titular da conta: \n");
            gets(contas[i][1].cliente);

            printf("Digite o numero da conta: \n");
            scanf("%d*c", &contas[i][2].conta);

            printf("Digite o saldo da conta: \n");
            scanf("%f*c", &contas[i][3].saldo);

        }
    }
    return 0;
}
