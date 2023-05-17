#include <stdio.h>
int main(){
    int a,b;
    printf("Enter numbers:  ");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("%d is largers than %d",a,b);
    }
    else{
        printf("%d is larger than %d",b,a);
    }
}