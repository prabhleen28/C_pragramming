#include<stdio.h>
int main(){
    int n,sign=1,r;
    scanf("%d",&n);
    int sum=0;
    while(n!=0){
        sign=sign*-1;
        r=n%10;
        sum+=(sign)*r;
        n=n/10;
    }
    printf("%d",sign*sum);
}