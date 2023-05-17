#include<stdio.h>
int main(){
    int n,f;
    scanf("%d",&n);
    int l=n%10;
    while(n!=0){
        f=n%10;
        n=n/10;
    }
    printf("%d %d",f,l);
}