/*Elabore uma sub-rotina que receba como parâmetro um valor N (inteiro e maior ou igual a 1) e determine o valor da sequência S, descrita a seguir: (a quantidade de parcelas que compõe S é igual a N) 

S = 1 + 1/2 + 1/3 +....
*/

float parcelas(int n){
    int i;
    float resultado = 0, j = 1;

    for(i = 1; i <= n; i++){
        resultado += j / i;
        printf("%1.0f / %d\n", j, i);
    }
    return resultado;
}

int main(){
    int n;
    float resultado;

    printf("Digite um valor n: ");
    scanf("%d", &n);

    resultado = parcelas(n);

    printf("O valor da sequencia S para n = %d: %0.2f\n", n, resultado);
    
    return 0;
}