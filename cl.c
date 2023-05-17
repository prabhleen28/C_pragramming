#include<stdio.h>
int main()
{
    int x = 2;
    printf("Value of  x before updation %d \n",x);
    
    int a;
    a = ++x;
    printf("value of a after updation %d \n",a);
    printf("value of x after updation %d \n",x);
    
    int b;
    b=++x;
     printf("value of b after updation %d \n",b);
    printf("value of x after updation %d \n",x);

    int c;
    c=x++;
     printf("value of c after updation %d \n",c);
    printf("value of x after updation %d \n",x);

    int y=a+b+x+c;
    printf("value of y= %d",y);
}