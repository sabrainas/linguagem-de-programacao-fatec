#include <stdio.h>
#include <locale.h>

int soma(int x, int y){
    int res;
    res = x + y;
    return res;
}

int dobro(int x){
    return 2*x;
}
void main(){
    setlocale(LC_ALL, "Portuguese");

    int x1, x2, total;

    printf("Entre com dois valores: ");
    scanf("%d%d", &x1, &x2);

    total = soma(x1,x2);

    printf("\nA soma dos dois valores é: %d", total);

    printf("\nO dobro do valor %d é: %d", x1, dobro(x1));
    printf("\nO dobro do valor %d é: %d", x2, dobro(x2));

    return;
}
