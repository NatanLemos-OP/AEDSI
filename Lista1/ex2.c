#include <stdio.h>
#include <stdlib.h>

    int somadeinteiros (int a, int b) {
        int c = (a+b)*5;
        printf("%d", c);
        return (c);
    }
    int main () {

        int a, b;
        scanf("%d", &a);
        scanf("%d", &b);
        int c;
        c = somadeinteiros(a,b);
    }