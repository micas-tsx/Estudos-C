#include <stdio.h>
#include <string.h>

#define N 20
int main() {
    char origem[N] = {"ola, mundo!"};
    char destino[N];

    printf("Antes do strycpy:\n");
    puts(origem);
    puts(destino);

    strcpy(destino, origem); // passa o valor de origem para destino

    printf("depois do strycpy:\n");
    puts(origem);
    puts(destino);
}
