#include <stdio.h>
#include <locale.h>

linha(int num){
    int i;
     for(i = 1; i <= num; i++){
         putchar('*');
     }
    putchar('\n');
}
void main(){
    setlocale(LC_ALL, "Portuguese");

    int i;

    linha(50);

    puts("numeros entre 1 e 5");

    linha(20);

    for(i = 1; i <= 5; i++){
        printf("%d\n", i);
    }
    putchar('\n');

    linha(20);

    return 0;
}
