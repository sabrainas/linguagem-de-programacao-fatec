/*Escreva um programa para calcular a soma dos n primeiros termos da série:

n = 1!/2! + 3!/4!  + 5!/6! + ... 

em que n é lido pelo teclado. Utilize a função fatorial.
*/
#include <stdio.h>

int fatorial(int x){
    return (x <= 1) ? 1 : x * fatorial(x - 1); 
}

double divisaoFatorial(int n){
    double soma = 0;
    int i;

    for(i = 1; i <= n; i+=2){
        soma += (double)fatorial(i) / fatorial(i + 1);
        printf("Soma parcial até o termo %d!/%d!: %0.2f\n", i, i + 1, soma);
    }

    return soma;
}

int main(){
    int n;
    double resultado;

    printf("Digite um valor para n: ");
    scanf("%d", &n);

    resultado = divisaoFatorial(n);
    printf("A soma dos %d primeiros termos da serie e: %0.2f\n", n, resultado);

    return 0;
}