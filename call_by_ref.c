#include <stdio.h>
int sum(int ,int);
int manin(){
    int a,b;
    printf("enter number");
    scanf("%d %d ", &a , &b);
    printf("%d", sum(&a,&b));
    return 0;
}
int sum(int *x,int *y){
    int z;
    z=*x + *y;
    return z;
}