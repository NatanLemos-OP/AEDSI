#include <stdio.h>

int y;
int x;

    int funcaoY(int x) {
        int f,h,g;
        h=(x*x) - 16;
        if(h>=0){
            f=h;
        } else{
            f=1;
        }
        if(f==0){
            g=(x*x)+16;
        }
        if(f>0){
            g=0;
        }
        return f+g;
    }
    int main () {
        printf("Digite o valor de X:");
        scanf("%d", &x);
        y=funcaoY(x);
        printf("%d", y);
    }
