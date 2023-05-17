#include <stdio.h>
int main(){
    int a=2;
    int *k=&a;
    printf("%u \n",k);
    k=k+1;
    printf("%u",k);
}