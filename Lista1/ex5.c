#include <stdio.h>
#include <stdlib.h>


int sr(int m,int w){
return (m+w);
}

int cr(int m, int w ){
int c=m+w;
printf("%d",c);
}


int main(){
    int m,w;
    int d;
scanf("%d",&m);
scanf("%d",&w);
d=cr(m,w);
printf("%d", sr(m,w));

}