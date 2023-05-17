#include <stdio.h>
int main(){
    int n;
    printf("enter the number of rows:  ");
    scanf("%d",&n);
    int a= 65;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%c",(char)a);
        }
        a++;
        printf("\n");
    }
}