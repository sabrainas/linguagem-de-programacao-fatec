//Faça uma sub-rotina que receba um vetor X de 20 de números reais como parâmetro e retorne a soma  dos elementos de X.
#include <stdio.h>

float somaReais(float x[]){
    int i;
    float soma = 0;

    for(i = 0; i < 20; i++){
        soma += x[i];
    }
    return soma;
}

int main(){
    int i;
    float resulSoma, x[20];

    for(i = 0; i < 20; i++){
        printf("%d - Digite um número real: ", i + 1);
        scanf("%f", &x[i]);
    }
    resulSoma = somaReais(x);
    printf("A soma dos números reais é: %0.2f", resulSoma);
    return 0;
}