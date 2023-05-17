// #include <stdio.h>
// int main(){
//     //int i=5;
//     //printf("%d%d%d",i++,i++,i++);
//     char ch1='G',ch2=10;
//     int i=ch1-'A';
//     printf("%d",i);
//     return 0;
// }
#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x>y&&x>z)
    {
        printf("x is older \n");
    }
    else if(y>z&&y>x)
    {
        printf("y is oldest\n");


    }
    else if (z>x&& z>y)
    {
        printf("z is oldest\n");
    }
     if(x<y&&x<z)
    {
        printf("x is youngest ");
    }
    else if(y<z&&y<x)
    {
        printf("y is youngest ");


    }
    else if (z<x&& z<y)
    {
        printf("z is youngest ");
    }
    
}