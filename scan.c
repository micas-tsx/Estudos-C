#include <stdio.h>

int main() {
    
    int idade = 0;
    float peso = 0.0;
    
    printf("Digite a idade: \n");
    scanf("%d", &idade);

    printf("Digite o seu peso: \n");
    scanf("%f", &peso);

    printf("sua idade e seu peso é: %d e %f \n", idade, peso);
}