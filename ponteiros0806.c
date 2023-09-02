#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char *strchr(char *str, char ch){   //versão 1
    int i;
    for(i = 0; str[i]!='\0'; i++){
        if(str[i] == ch){
            return &str[i];
        }
    }
    return NULL;
}

char *strchr1(char *str, char ch){ //versão 2
    while(*str!='\0'){
        if(*str == ch){
            return str;
        }else{
            str++;
        }
    }
    return NULL;
}
int main(){
    setlocale(LC_ALL, "Portuguese");

    char s[100], c;
    printf("Introd. uma string: ");
    gets(s);

    printf("Introd. um char: ");
    scanf("%c", &c);

    puts(strchr(s,c));

    return 0;
}
