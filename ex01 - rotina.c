#include <stdio.h>

float parcelas(float n) {
    float i, j, k, l, soma;

    j = 2;
    k = 4;
    l = 2;
    soma = 0;

    for (i = 1; i <= n; i++) {
        soma = soma + (j / k);
        j = j + i + l;
        k += 1;
        l += 1;
    }

    soma = soma + (((n * n) + 1) / (n + 3));

    return soma;
}

int main() {
    float n;
    float retorno;

    printf("Digite um valor inteiro e positivo: ");
    scanf("%f", &n);

    retorno = parcelas(n);

    printf("\nA soma dos valores e: %0.2f", retorno);

    return 0;
}
