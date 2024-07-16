#include <stdio.h>

// break para o código de repetição 
// o continue pula o cóigo para a proxima repetiçao

int main() {
    
    int i;

    for(i=1; i<=10; i++) {
        printf("%d ", i);
       
        if(i == 5) {
            break;
        }
        // aqui ele para o código de repetição com o break apartir de uma condição
    }
}