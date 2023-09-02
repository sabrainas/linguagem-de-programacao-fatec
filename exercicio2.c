#include <stdio.h>

int main(){
    int dia, mes, ano;

    printf("digite um dia: ");
    scanf("%d", &dia);

    printf("digite um mês: ");
    scanf("%d", &mes);

    printf("digite um ano: ");
    scanf("%d", &ano);

    printf("voce digitou a data: %d/%d/%d", dia, mes, ano);
    return 0;
}