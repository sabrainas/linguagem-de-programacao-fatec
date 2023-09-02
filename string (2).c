#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h.>

int main(){

    setlocale(LC_ALL, "Portuguese");

    //Declara��o do tipo de vetor char
    char nome[20] = "Fatec";
    char cidade[20] = "Guarulhos";
    int numero;

    //Apresenta�ao do conteudo
    printf("A melhor %s � a de %s", nome, cidade);

    //Fun��es de manipula��o de string
    puts("\n\n <<N�mero de caracteres>>");
    //strIn - retorna o numero de caracteres na string
    printf("numero de caracteres: %d\n", strlen(nome));

    //C�pia de cadeia de caracteres
    char a[20] = "Boa aula";
    char b[20] = "Algoritmos";

    puts("\nAntes de copiar");
    puts(a);
    puts(b);

    puts("\nDepois de copiar");
    strcpy(a,b);
    puts(a);
    puts(b);

    puts("\nC�pia de caracteres indicando a quantidade desejada");
    char c[20] = "Boa Aula";
    char d[20] = "Algoritmos";
    strncpy(c,d,5);
    puts("\nDepois de copiar");
    puts(c);
    puts(d);

    puts("\n\n <<Concatenando cadeia de caracteres>>");
    char e[20] = "  boa aula";
    char f[20] = " algoritmos,";
    strcat(e,f);
    puts(e);


    puts("\n\n <<Concatenando cadeia de caracteres com numero definido>>");
    char g[20] = "  boa aula";
    char h[20] = " algoritmos,";
    //para indicar o numero de caracteres a concatenar
    strncat(g,h,3);
    puts(g);

    puts("\n\n <<Comparando cadeia de caracteres>>");
    int resul;
    char valor1[20] = "Boa Aula";
    char valor2[20] = "Boa Aula";
    resul = strcmp(valor1,valor2);

    if(resul == 0){
        printf("Valores iguais para strcmp, resultado = %d", resul);
    } else {
        printf("Valores diferentes para strcmp, resultado = %d", resul);
    }

    //Diferen�a
    resul = stricmp(valor1,valor2);
    if (resul == 0){
        printf("\nValores iguais para stricmp, resultado = %d", resul);
    } else {
        printf("\nValores diferentes para stricmp, resultado = %d", resul);
    }

    puts("\n\n <<Procura caractere numa string>>");
    int posi;
    posi = strchr(valor1,'a')-valor1;
    printf("Valor encontrado na posi��o %d", posi);

    puts("\n\n <<proura uma string em outra string>>");
    char texto1[] = "Programa de computador";
    char texto2[] = "de";
    int posic;
    posic = strstr(texto1,texto2) - texto1;
    printf("Valor encontrado na posi��o = %d", posic);

    puts("\n\n <<Converte caracteres para mai�scula>>");
    char valor3[] = "Fatec";
    printf("%s", strupr(valor3));

    puts("\n\n <<Converte caracteres para min�scula>>");
    printf("%s", strlwr(valor3));

    puts("\n\n <<substitui uma string por outro caractere>>");
    char texto3[] = "Qualquer coisa";
    char texto4[] = "Qualquer coisa";
    puts(texto3);
    strset(texto3,'?');
    puts(texto3);

    strnset(texto4,'?',3);
    puts(texto4);

    puts("\n\n <<Verificando c�digo de caracteres>>");
    char x1;
    x1 = 65;
    printf("\nO valor encontrado �: %c", x1);

    char x2;
    x2 = '\101';
    printf("\nO valor encontrado � : %c", x2);

    int x3;
    x3 = toascii('B');
    printf("\nO c�digo ASCII para A �: %d", x3);

    printf("\n\n");


    return 0;
}
