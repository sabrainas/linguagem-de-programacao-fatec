#include <stdio.h>

int main(){

    int lado, perimetro;

    printf("digite o valor do lado de um quadrado: ");
    scanf("%d", &lado);

    perimetro = lado*4;

    printf("o perimetro do quadrado é: %d", perimetro);
    return 0;
}