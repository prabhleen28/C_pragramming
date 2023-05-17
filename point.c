#include <stdio.h>
int main()
{
    int *ptr;
    ptr= NULL;
    printf("%u \n", &ptr);
    printf("%d \n", *ptr);
    printf("%d \n", *ptr);
    // int x=sizeof(NULL);
    // printf("%d",x);
}