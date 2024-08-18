#include <stdio.h>
#include <stdlib.h>

int main() {
    char s[10];
    // delimitamos o tamanho do vetor como 10

    printf("dgite algo (scanf convecional): \n");
    scanf("%s", s); 
    // aqui ele ignora espaço e muitas mais coisas
    // ele deixa passar o numero delimitado pelo char
    fflush(stdin);
    // chamar o fflush(stdin) sempre que fizer uma string

    printf("resultado: %s \n\n", s);

    printf("Digite algo (scanf aprimorado): \n");
    scanf("%9[^\n]s", s); 
    // aqui delimitamos ele com um a menos doq o tamanho total do vetor
    // ele não deixa passar pelo numero maximo de caracteres
    // e tem /0 como final da "string"
    fflush(stdin);

    printf("Resultado: %s \n\n", s);

    printf("Digite algo (leitura pelo gets) \n");
    gets(s); //gets n limita o numero de caracteres que da pra por dentro dele 
    fflush(stdin);

    puts("resultado: ");
    puts(s);
    puts("");

    printf("digite algo(leitura pelo fgets:) \n");
    fgets(s, 10, stdin); // limita o numero de caractere
    fflush(stdin);

    puts("Resultado: "); //escreve algo na tela 
    puts(s);
}