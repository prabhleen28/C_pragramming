#include<stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
    
    k=i;
    for(j=1;j<=i;j++){
        printf("*");
        k++;
    }
    k-=2;
    for(j=1;j<i;j++){
        printf("*");
        k--;
    }
    printf("\n");
}
}