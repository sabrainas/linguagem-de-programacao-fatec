#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){

    //int main[1,3];

    setlocale(LC_ALL, "Portuguese");

    //Declara��o de vetor ja colocando o conteudo
    char nome[] = {'P', 'R', 'O', 0};
    puts(nome);

    //Declara��o do vetor com o conteudo
    char nome1[] = "PROG";
    puts(nome1);

    //char vet1[8];
    //copia o conteudo indicado para a variavel vet "string"
   // strcpy(vet1, "Programa"); //adicionando o conteudo para dentro do vetor
   // puts(vet1);

    //char vet2[10];
    //printf("Digite um conte�do: ");
    //permite colocar na variavel que recebe por parametro,
    //todos os caracteres introduzidos
    //gets(vet2);
    //fun��o puts: coloca na tela a string passada � fun��o e
    //em seguida faz automaticamente a mudan�a de linha
    //puts(vet2);
    //
    //printf("%s",nome1);

    puts(strcat(nome , nome1)); //concatena duas variaveis
    puts(strncat(nome, nome1,2));
    puts(nome);
   // puts(xpto);
    //puts(strncat(nome,nome1,2)); //concatena duas variaveis definindo o numero de caracteres

    return 0;

}
