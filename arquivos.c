#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");

    //criação de ponteiros para arquivos
    FILE *arq, *pont;

    int retclose;
    char texto;
    //char cadeia [30];
    //int xp = 1;

    //criação da pasta caso não exista
    //system ("md c:\\teste");
    //r - (read) somente para leitura
    //w - (write) apenas para escrita
    //a - (append) abertura do arquivo

    //abertura do arquivo
    arq = fopen("C:\\Testes\\teste.txt", "a+");

    if(arq == NULL){
        printf("Problemas na abertura do arquivo");
    }else{
        printf("Abertura OK\n");
    }

    //<<leitura>

    //leitura de um valor numérico no arquivo
    int teste, teste1;
    fscanf(arq, "%d %d", &teste, &teste1);
    printf("\n%d %d", teste, teste1);

    //leitura de dados string no arquivo
    char cadeia [100];

    while(fgets(cadeia,100,arq) != NULL){
            printf("%s", cadeia);
          }


    //leitura de dados no arquivo
    //char cadeia[100];
    //while (fgets(cadeia,100,arq) != NULL){
     //   printf("%s", cadeia);
    //}
    //<<fim leitura>>

    //<<gravação>>
    fprintf(arq, "Armazenando dados diretos\n");
        //caso queira armazenar sem perder os dados anteriores

        char frase[] = "outro dado\n";
        fputs(frase,arq);

        //para somente um caractere
        //char carac = 'a';
        //fputs("\n", arq);
       // fputc(carac, arq);

        //entrada de dados no arquivo
        //gets(cadeia);
        //fputs(cadeia, arq);
        //fputs("\n", arq);
    //<<fim gravação>>
    //fechamento do arquivo
    //retorna 0 caso o fechamento do arquivo tenha tido sucesso
    retclose = fclose(arq);
    printf("\nFechamento %d", retclose);

    return 0;
}
