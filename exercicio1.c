#include <stdio.h>

int main(){
    int num1, num2, num3, soma, sub, mult;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &num3);

    soma = num1 + num2 + num3;
    printf("a soma dos três valores é: %d \n", soma);
    
    sub = num1 - num2 - num3;
    printf("a subtracao dos três valores é: %d \n", sub);

    mult = num1 * num2 *  num3;
    printf("a multiplicacao dos três valores é: %d \n", mult);

    return 0;
}