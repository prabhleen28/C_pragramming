#include <stdio.h>
int main(){
    // int i =0,j=1,k=2,m;
    // m=i++&&j++&&k++;
    // printf("%d%d%d%d",m,i,j,k);

    // int n=0,m=0;
    // if(n>0)
    // if(m>0)
    // printf("True");
    // else
    // printf("False");

    int x=5;
    int y=x++ + ++x +(2*x + x/2);

    printf("%d %d",y,x);
}