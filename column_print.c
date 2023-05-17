#include<stdio.h>
int main(){
    int n,m;
    int i,j;
    int sum=0;
    
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            sum+=arr[j][i];
        }
        printf("%d ",sum);
        sum=0;
    }
}