#include <stdio.h>
int main(){
    int x=2;
    int *y= &x;
    printf("value of x %d \n",x);
    printf("address of x %u \n",&x);
    printf("address of x in hexadecimal %x \n",&x);
    printf("%u \n",*(&x));
    printf("%u \n",&x);
    printf("%u \n",y);
    printf("%u \n",&(*y));
}