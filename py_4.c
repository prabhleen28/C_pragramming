#include <stdio.h>
int main(){
    int n;
    printf("enter the number of rows:  ");
    scanf("%d",&n);
    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}