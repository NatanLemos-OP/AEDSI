#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


    int quadrado (int lado) {
        int area;
        area = lado*lado;
        printf("\n%d", area);
    }

    int circulo (int raio) {
        int area;
        area = M_PI * (raio*raio);
        printf("%d", area);
    }

    int main () {
        int lado;
        int raio, c;
        printf("Informe o raio");
        scanf("%d", &raio);

        printf("Informe o lado");
        scanf("%d", &lado);


        c = circulo(raio);
        c = quadrado(lado);
    }