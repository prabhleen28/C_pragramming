#include<stdio.h>
int main(){
    int n,c;
    scanf("%d",&n);
    scanf("%d",&c);
    int i,j;
    int arr[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    j=c;
    i=0;
    c++;
    while(c!=0){
        printf("%d",arr[i][j]);
        c--;
        j--;
        i++;
    }
}