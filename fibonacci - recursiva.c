//Fazer o programa com função recursiva para apresentação dos n números da sequencia de Fibonacci
#include <stdio.h>

fibonacci(int n){

    //verifica se n é menor ou igual a 1. se sim, ira retornar o proprio n. se nao, ira retornar a soma dos valores anteriores ate a quantidade n desejada
    if(n <= 1){
        return n;
    }else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
    
}

int main(){

    int n, i;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("A sequencia de fibonacci e: ");
    for(i = 0; i < n; i++){
        printf("%d - ", fibonacci(i));
    }

    return 0;
}