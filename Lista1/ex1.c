#include <stdio.h>
#include <stdlib.h>

    int soma (int a, int b) {
        int c = (a+b)/2;
        printf("%d", c);
    }



    int main () {

        int a, b;
        scanf("%d", &a);
        scanf("%d", &b);
        int c;
        c = soma(a,b);
    }