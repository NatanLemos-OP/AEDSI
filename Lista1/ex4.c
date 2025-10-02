#include <stdio.h>
#include <stdlib.h>
#include <math.h>
    int hipotenusa (int a, int b) {
        int c = sqrt((a*a)+(b*b));
        printf("%d", c);
        return (c);
    }
    int main () {
        int a, b;
        scanf("%d", &a);
        scanf("%d", &b);
        int c;
        c = hipotenusa(a,b);
    }