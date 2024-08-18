#include <stdio.h>
#include <string.h>

#define N 50
int main() {
    char hardText[N] = {"/exit"};
    char senha_usr[N];
    int ok;

    printf("Digite um text:\n");
    gets(senha_usr);

    ok = strcmp(hardText, senha_usr); // compara hardText e senha_usr e retorna 0 se for igual passando pra variavel ok

    if(ok == 0) {
        printf("senha correta \n");
    } else{
        printf("senha incorreta \n");
    }
}