#include <stdio.h>
int main(){
    int n,i;
    printf("enter any number: ");
    scanf("%d",&n);
    printf("all natural numbers in reverse order from %d to 1: \n", n);
    for(i=n;i>=1;i--){
        printf("%d \n",i);
    }

}