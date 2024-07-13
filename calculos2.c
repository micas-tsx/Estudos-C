#include <stdio.h>

int main() {
    int dado = 0;

    printf("digite um valor: \n");
    scanf("%d", &dado);

    printf("dado antes de incrementar: %d \n", dado);

    dado++;
    printf("dado dps de incrementar: %d \n", dado);
    
    dado--;
    printf("dado dps de decrementar: %d \n", dado);

    dado+= 3;
    printf("dado dps de encrementar 3: %d \n", dado);

    dado -= 2;
    printf("dado dps de decrementar 2: %d \n", dado);

    dado *= 10;
    printf("dado dps de multiplicar por 10: %d \n", dado);
}