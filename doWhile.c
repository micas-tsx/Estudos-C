#include <stdio.h>
// similiar ao while, só q o teste para finalizar é no final
// logo, ele tem q rodar pelo menos uma vez

// a base é assim:
// do {
//     código;
// } while(condição);

int main() {
    int i =  1;

    do{
        printf("%d", i);
        i++;
    } while(i <= 10);
}