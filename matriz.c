#include <stdio.h>

int main() {
    int mat[3][3] = { 
        {1,2,3}, 
        {4,5,6}, 
        {7,8,9} 
    };
    int i, j;

    printf("imprimindo a primeira linha: \n");
    for(j=0; j<3; j++) {
        printf("%d", mat[0][j]);
    }
    printf("\n\n Imprimeindo a matriz toda:\n");
    for(i=0;i<3;i++) { //i percorre a coluna
        for(j=0;j<3;j++) { // j percorre a linha
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    // depois de percorre a linha toda ele zera o for e pula a coluna e percorre a linha denovo, até percorrer todos
}    