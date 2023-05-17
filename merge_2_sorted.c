#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int m,j;
    scanf("%d",&m);
    int brr[m];
    for(j=0;j<m;j++){
        scanf("%d",brr[j]);
    }
    i=0;j=0;
    while(i<n && j<m){
        if(arr[i]<brr[j]){
            printf("%d",arr[i]);
            i++;
        }
        else{
            printf("%d",brr[j]);
            j++;
        }
    }
    while(i<n){
        printf("%d",arr[i]);
        i++;
    }
    while(j<m){
        printf("%d",brr[j]);
        j++;
    }
}