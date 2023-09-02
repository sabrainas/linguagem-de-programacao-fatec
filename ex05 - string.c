/*Faça um programa que receba o nome completo de uma pessoa e reescreva-o de acordo com o exemplo  a seguir.  Exemplo: Nome: Maria silva costa  
saída: costa, M. s.  
Nome: João carlos Gomes Marques  
saída: Marques, J. c. G.*/

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>


int main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[100];
    int i, j, contEspaco = 0, numPalavras = 0, row;

    printf("Digite o seu nome completo: \n");
    gets(nome);

    //contar os espaços da minha frase
    for (i = 0; nome[i] != '\0'; i++) {
        if (nome[i] == ' ') {
            contEspaco++;
        }
    }
    //contar as palavras da minha frase
    numPalavras = contEspaco + 1;

    //printf("A quantidade de palavras é: %d\n", numPalavras);
    //printf("A quantidade de espaços é: %d\n", contEspaco);

    //armazena na matriz palavras a quantidade de palavras que existem na frase
    char palavras[numPalavras][30];

    i = 0;
    j = 0;
    row = 0;

    //vai navegar o vetor frase ate a posição for nula
    while (nome[i] != '\0') {
        //aqui vai percorrer os caracteres individuais até tiver um espaço em vazio
        if (nome[i] != ' ') {
            palavras[row][j] = nome[i];
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

//pegar o ultimo nome
//abreviar os nomes do meio

    for(i = 0; i < row - 1; i++){
        if(palavras[i][0]){
            palavras[i][1] = '.';
            palavras[i][2] = ' ';
            palavras[i][3] = '\0';
        }
    }

    //imprime o sobre nome
    printf("Ola: %s, ", palavras[row - 1]);
    //percorre a string para imprimir o nome abreviado
    for (i = row - 2; i >= 1; i--) {
        printf("%s ", palavras[i]);
    }
    printf("\n");

    return 0;
}