#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter the angles");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && a+b+c==180){
        printf("It is a Valid triangle");
    }
    else{
        printf("It is not a valid triagle");
    }
}