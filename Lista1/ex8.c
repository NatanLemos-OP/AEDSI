#include <stdio.h>
#include <stdlib.h>
#include <math.h>
    float aumento (float X, float Y) {
       float a = X*(1+Y/100);
       printf("%.2f", a);
    }
    int main () {
        float X, Y;
        printf("Informe X ");
        scanf("%f", &X);
        printf("Informe Y ");
        scanf("%f", &Y);
        float c;
        c = aumento(X,Y);
    }