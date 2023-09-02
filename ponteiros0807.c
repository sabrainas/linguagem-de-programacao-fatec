#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define N_STRINGS 3

int main(){
    setlocale(LC_ALL, "Portuguese");
    char vetor[N_STRINGS][20] = {"Olá", "Antonio", "Susana"};
    char (*ptr)[20] = vetor; //ponteiros para vetores de 20 chars

    char *p;

    while(ptr-vetor < N_STRINGS){
        p = *ptr; //p recebe a string apontada por ptr

        while(*p)
            putchar(*p++);
        putchar('\n');
        ptr++;
    }
    return 0;
}
