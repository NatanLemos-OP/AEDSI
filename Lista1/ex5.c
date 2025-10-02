#include <stdio.h>
#include <stdlib.h>
#include <math.h>


    int comretorno (int M, int W) {
        return (M+W);
    }

    int semretorno (int M, int W) {
        int c;
        c = M+W;
        printf("\n%d", c);
    }

    int main () {
        int M, W;
        int c;
        scanf("%d", &M);
        scanf("%d", &W);
        printf("%d", comretorno(M,W));
        c = semretorno(M,W);
    }