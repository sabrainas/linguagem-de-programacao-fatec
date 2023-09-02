#include <stdio.h>

//recursividade: a capacidade que uma linguagem tem de permitir que uma fun��o possa invocar a si mesma

fact(int n){

    int x, y;

    //se n for igual a 0, retorna o valor 1; � um crit�rio para t�rmino da fun��o
    if(n == 0)
        return 1;

    //se x for maior que 0, ir� subtrair menos um numero de n
    x = n - 1;

    //o valor de x ir� ser atribu�do a y
    y = fact(x);

    //ir� retornar o valor n vezes y; ocorre a chamada recursiva
    return n * y;
    //return n * fat(n - 1) //a mesma coisa de forma simplificada; recursividade direta
}

int main(){

    int numero;

    printf("Entre com o numero para o fatorial: ");
    scanf("%d", &numero);

    printf("%d", fact(numero));//direta

    return 0;
}
