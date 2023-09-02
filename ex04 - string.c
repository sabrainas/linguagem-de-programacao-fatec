//Faça um programa que criptografe cada palavra de uma frase, substituindo por ? a última metade de  seus caracteres. Exemplo: A aula é boa mas poderia ser mais curta. ? au?? ? b?? m?? pod???? s?? ma?? cu???.
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char frase[100];
    int i, j, contEspaco = 0, numPalavras = 0, row;

    printf("Digite uma frase: ");
    gets(frase);

    //contar os espaços da minha frase
    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ') {
            contEspaco++;
        }
    }
    //contar as palavras da minha frase
    numPalavras = contEspaco + 1;

    //printf("A quantidade de palavras é: %d\n", numPalavras);
    //printf("A quantidade de espaços é: %d\n", contEspaco);

    //armazena na matriz palavras a quantidade de palavras que exixtem na frase
    char palavras[numPalavras][30];

    i = 0;
    j = 0;
    row = 0;

    //vai navegar o vetor frase ate a posição for nula
    while (frase[i] != '\0') {
        //aqui vai percorrer os caracteres individuais até tiver um espaço em vazio
        if (frase[i] != ' ') {
            palavras[row][j] = frase[i];
            j++;
        } else { // se tiver um espaço em branco, irá adicionar o valor nulo para indicar o fim da palavra e ir para a proxima linha da matriz
            palavras[row][j] = '\0';
            row++;
            j = 0;
        }
        i++;
    }

    //vai conferir se a ultima palavra foi adicionada à minha matriz
    if (j > 0) {
        palavras[row][j] = '\0';
        row++;
    }

    for (i = 0; i < numPalavras; i++) {
        //aqui verifico o tamanho da palavra e logo após faço a divisão por 2
        int tamanho = strlen(palavras[i]);
        for (j = tamanho / 2; j < tamanho; j++) {
            //atribuo o caracter desejado
            palavras[i][j] = '?';
        }
        //adiciono o nulo para indicar o final da palavra
        palavras[i][tamanho] = '\0';
    }

    //imprime a palavra criptografada
    printf("Frase criptografada: ");
    for (i = 0; i < numPalavras; i++) {
        printf("%s ", palavras[i]);
    }
    printf("\n");

    return 0;
}