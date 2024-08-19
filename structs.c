#include <stdio.h>
#include <string.h>

#define TAM 50

struct tipo_pessoa {
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main() {
    tipo_pessoa pes = {0, 0.0, "teste"};

    printf("inicio: \n");
    printf("idade: %d\n", pes.idade);
    printf("peso: %.2f\n", pes.peso);
    printf("nome: %s\n", pes.nome);

    // alterando os valores
    scanf("%d", &pes.idade);
    scanf("%f", &pes.peso);
    strcpy(pes.nome, "micas");

    printf("alterando via código: \n");
    printf("idade: %d\n", pes.idade);
    printf("peso: %.2f\n", pes.peso);
    printf("nome: %s\n", pes.nome);

    // solictando inserções via teclado
    printf("idade: ");
    scanf("%d", &pes.idade);
    printf("peso: ");
    scanf("%f", &pes.peso);
    fflush(stdin);
    printf("nome: ");
    scanf("%s", pes.nome);

    printf("inserindo via teclado: \n");
    printf("idade: %d\n", pes.idade);
    printf("peso: %.2f\n", pes.peso);
    printf("nome: %s\n", pes.nome);
}