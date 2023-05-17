#include <stdio.h>
int main(){
    int n;
    int sum=0;
    scanf("%d",&n);
    int power=1;
    while(n!=0){
        int r=n%10;
        sum+=r*power;
        power*=2;
        n=n/10;
    }
    printf("%d",sum);
}