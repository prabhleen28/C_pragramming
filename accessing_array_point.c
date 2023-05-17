#include <stdio.h>
int main(){
    int a[]={12,13,14,15,16};
    int i,*j;
    j=&a[0];
    for(i=0;i<4;i++){
        printf("add = %u ele = %d\n",j,*j);
        j++;
    }
    
}