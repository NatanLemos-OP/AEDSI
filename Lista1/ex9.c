#include <stdio.h>
#include <stdlib.h>

    void divisaovetor (int vetA[4]) {
        for(int i=0; i<4; i++){
            vetA[i] = vetA[i]/2;
        }

        for(int i=0; i<4; i++){
            printf("\n%d", vetA[i]);
        }
    }



    int main () {

        int vetA[4];
        for(int i=0; i<4; i++){
            scanf("%d", &vetA[i]);
        }

        divisaovetor(vetA);
    }