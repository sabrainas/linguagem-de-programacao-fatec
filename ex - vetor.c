#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char nome[15], sobrenome[50];

    while(1){
        printf("Digite o seu primeiro nome: ");
        gets(nome);

        printf("Digite seu sobrenome: ");
        gets(sobrenome);

        printf("%s %s\n", nome, sobrenome);

        if(nome[0] == '\0'){
            printf("O programa foi encerrado");
            break;
        }
    }
    return 0;
}
