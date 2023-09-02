#include <stdio.h>

int main(){

    int num1, num2, resto;

    printf("digite um primeiro valor: ");
    scanf("%d", &num1);

    printf("digite um segundo valor: ");
    scanf("%d", &num2);

    resto = num1 % num2; 

    printf("o resto da divisão é: %d", resto);
    
    return 0;
}