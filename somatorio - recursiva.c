//Faça um função recursiva que apresente o somatório dos valores de 1 a N (digitado) 

int soma(int n){
    //a condição de parada ocorre quando n for igual a 1
    if(n == 1){
        printf("1");
        return 1;
    }
    //se nao, a função soma irá chamar ela mesma ate parar no valor 1
    printf("%d + ", n);
    return n + soma(n - 1);
}

int main(){
    int n, resultado; 

    printf("Digite um numero n: ");
    scanf("%d", &n);

    resultado = soma(n);
    printf(" =  %d\n", resultado);
    return 0;
}