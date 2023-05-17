#include <stdio.h>
int main(){
    void *k;
    int a=2;
    char b='A';
    float e=3.14;
    k=&a;
    printf("%d \n", *(int *)k);
}