#include<stdio.h>
int fac(int x){
    if(x==1){
        return 1;
    }
    return(x*fac(x-1));
}
int main(){
    int x;
    printf("enter number:  ");
    scanf("%d",&x);
    printf("Factorial of %d= %d ",x,fac(x));
}