#include <stdio.h>
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    printf("%d",fact(n));
}