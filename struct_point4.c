#include<stdio.h>
#pragma pack(1)
struct s
{
    
    char a;
    int i;
    char b;
   
    
};
struct s t;
int main(){
    printf("the size of structure %d",sizeof(t));
}