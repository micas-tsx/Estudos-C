#include <stdio.h>
#include <stdlib.h>

int main() {
    int var = 15;
    int *ptr;

    ptr = &var;

    printf("valor de var: %d\n", var);
    printf("endereco de var: %p\n", &var);
    printf("valor apontado por ptr: %d\n", *ptr);
    printf("endereco apontado por ptr: %p\n", ptr);
    printf("endereco de ptr: %p\n", &ptr);

    *ptr = 73;
    // aqui eu consigo mudar o valor do var usando o ponteiro para ele

    printf("\n\n");
    printf("valor de var: %d\n", var);
    printf("endereco de var: %p\n", &var);
    printf("valor apontado por ptr: %d\n", *ptr);
    printf("endereco apontado por ptr: %p\n", ptr);
    printf("endereco de ptr: %p\n", &ptr);
}

// Ponteiros:
// *ptr:o conteudo do endereço da variavel que ptr aponta
// ptr: o endereço da variavel
// &ptr: o endereço do ponteiro
