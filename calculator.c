#include<stdio.h>
int main(){
    char op;
    int a,b;
    scanf("%c",&op);
    scanf("%d %d",&a,&b);
    switch(op)
    {
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        default:
        printf("not a valid operator");
    }
    return 0;
}