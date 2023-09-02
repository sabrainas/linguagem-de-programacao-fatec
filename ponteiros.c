#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char ch = 'A';
    char *ptr;

    ptr = &ch;

    printf("Valor de ch: %c", ch);
    printf("\nValor de *ptr: %d", ptr); //mostra o endere�o da vari�vel a qual fica armazenada na mem�ria

    printf("\n\n***Outro exemplo***");
    int a = 5, b = 7;
    int *ptr1 = NULL;

    ptr1 = &a;

    printf("\nValor de a: %d", a);
    printf("\nValor da vari�vel apontada por *ptr1: %d", *ptr1);
        //apresentando o valor da vari�vel apontada
    printf("\nValor de *ptr1: %d", ptr1);

    printf("\n\n***Alterando valores***");
    ptr1 = &b;
    printf("\nValor de b: %d", b);
    printf("\nValor de *ptr1: %d", ptr1);//valor de endere�o
    printf("\nValor de *ptr1: %d", *ptr1);

    printf("\n\n***Depois da alteracao***");
    *ptr1 = 20;
    printf("\nValor de b: %d", b);
    printf("\nValor de *ptr1: %d", ptr1);
    printf("\nValor da vari�vel apontada *ptr1: %d", *ptr1);

    return 0;
}
