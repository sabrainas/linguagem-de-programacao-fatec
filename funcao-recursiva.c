#include <stdio.h>

//recursividade: a capacidade que uma linguagem tem de permitir que uma função possa invocar a si mesma

fact(int n){

    int x, y;

    //se n for igual a 0, retorna o valor 1; é um critério para término da função
    if(n == 0)
        return 1;

    //se x for maior que 0, irá subtrair menos um numero de n
    x = n - 1;

    //o valor de x irá ser atribuído a y
    y = fact(x);

    //irá retornar o valor n vezes y; ocorre a chamada recursiva
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
