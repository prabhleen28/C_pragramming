#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d is laarger than %d %d",a,b,c);
    }
    else if(b>a && b>c){
        printf("%d is laarger than %d %d",b,a,c);
    }
    else{
        printf("%d is laarger than %d %d",c,b,a);
    }
}