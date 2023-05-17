#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    switch(a%2){
        case 0:{
            printf("%d is even",a);
            break;
        }
        case 1:{
            printf("%d is odd",a);
            break;
        }
        default:{
            printf("error");
            break;
        }
    }
}