//Elabore uma sub-rotina que receba um vetor X de 15 números inteiros como parâmetro e retorne a  quantidade de valores pares em X.
#include <stdio.h>

int pares(int x[]){
    int i, par;
    par = 0;

    for(i = 0; i < 15; i++){
        if(x[i] % 2 == 0){
            par ++;
        }
    }
    return par;
}

int main(){
    int i, qtdPares, x[15];

    for(i = 0; i < 15; i++){
        printf("Digite um número inteiro %d: ", i + 1);
        scanf("%d", &x[i]);
    }

    qtdPares = pares(x);
    printf("Os numeros pares são: %d", qtdPares);
    
    return 0;
}