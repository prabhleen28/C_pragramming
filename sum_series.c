#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    float sum=0.0;
    int i;
    for(i=1;i<=n;i++){
        if(i%2==0){
            sum=sum-(1.0/i);
        }
        if(i%2!=0){
            sum=sum+(1.0/i);
        }
    }
    printf("%0.4f",sum);
}