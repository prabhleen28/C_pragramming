#include<stdio.h>
int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    int d,c=0;
    for(i =0;i<sum;i++){
        d=i*i*i;
        if(sum==d){
            c=1;
            break;
        }
        if(d>sum){
            break;
        }

    }
    int d1=i*i*i;

    if(c==1){
        printf("Yes");
    }
    else{
        int diff=d1-sum;
        printf("%d",diff);
    }
}