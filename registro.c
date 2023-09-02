#include <stdio.h>

    struct AGENDA{
        char nome[20];
        int idade;
    };

int main(){

    struct AGENDA agenda1;

    printf("Digite o seu nome: ");
    //scanf("%c", &agenda1.nome);
    gets(agenda1.nome);

    printf("Digite a sua idade: ");
    scanf("%d", &agenda1.idade);

    return 0;
}
