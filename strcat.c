#include <stdio.h>
#include <string.h>

#define N 50
int main() {
    char s1[N] = {"logica de "};
    char s2[N] = {"programacao"};

    printf("Antes do strcat:\n");
    printf("str1: %s\n", s1);
    printf("str2: %s\n", s2);

    strcat(s1, s2); // concatena s2 em s1, e em s1 fica a string completa, mt usado para nome e sobrenome

    printf("depois do strycpy:\n");
    puts(s1);
}