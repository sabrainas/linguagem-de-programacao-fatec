#include <stdio.h>

    struct BANCO{
        char titular[35];
        int num;
        float saldo;
    };

int main(){

    struct BANCO contas[4][3];
    int cont = 0;

    for (cont = 0; cont < 4; cont++){
        printf("\n");
        printf("Digite o nome do titular da conta: ");
        gets(contas[cont][1].titular);

        printf("Digite o numero da conta: ");
        scanf("%d*c", &contas[cont][2].num);

        printf("Digite o saldo da conta: ");
        scanf("%f*c", &contas[cont][3].saldo);
    }
    return 0;
}
