#include <stdio.h>
#include <stdlib.h>
#include <math.h>


    int salario (int a, int b) {
        if(a>b){
            printf("%d", a);
        } else{
            printf("%d", b);
        }
    }
    int main () {
        int a, b;
        scanf("%d", &a);
        scanf("%d", &b);
        salario(a,b);
    }