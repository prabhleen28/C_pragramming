#include<stdio.h>
int main(){
    int r,c,i,j;
    scanf("%d",&r);
    scanf("%d",&c);

    int arr[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(arr[i][j]==0){
                for(j=0;j<c;j++){
                    arr[i][j]=0;
                }
                break;
            }

        }
    }

    for(int i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}