#include <stdio.h>
int summ(int n){
    int sum=0;
    if(n==0)
    return;
    return (n%10+(summ(n/10)));
}
int main(){
    int n;
    printf("enter number : ");
    
        scanf("%d",&n);
    printf("%d",summ(n));
}