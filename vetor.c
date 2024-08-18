#include <stdio.h>

int main() {

    int v[5];
    // declara o vetor com 5 elementos

    float m;
    // declara uma variavel

    v[0] = 50; // passa o valor de cada elemento manualmente
    v[1] = 40;
    v[2] = 30;
    v[3] = 20;
    v[4] = 10;

    m = (v[0] + v[1] + v[2] + v[3] + v[4] / 5);
    // calcula a média do vetor passando para variavel m

    printf("Resultado: %f\n", m);
    // mostra na tela

    printf("\n\n");

    int v[6] = {10, 20, 30, 40, 50, 60};

    int i;
    float s = 0;

    for(i = 0; i < 6; i++) {
        s += v[i];
    }

    printf("Resultado: %f\n", s/6);
}