#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the values");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d",a);
    printf("%d",b);

}