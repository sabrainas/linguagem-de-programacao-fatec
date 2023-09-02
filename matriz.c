#include <stdio.h>

int main(){
    
    int i, j, vet[2][2], referencia, mult[2][2];

    for (i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("linha %d, coluna %d: ", i, j);
            scanf("%d", &vet[i][j]);
        }
    }

    referencia = vet[0][0];

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            if(vet[i][j] > referencia){
                referencia = vet[i][j];
            }
        }
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            mult[i][j] = referencia * vet[i][j];
        }
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d x %d = %d\n", referencia, vet[i][j], mult[i][j]);
        }
    }
    
    return 0;
}