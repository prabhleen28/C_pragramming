//2 d array
#include<stdio.h>
int main(){
    int r,c;
    printf("enter r and c ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("enter the ele ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("di\n");
     for(int i=0;i<r;i++){
        for(int j=0;j<c-i-1;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

/*321
c-no of country
n=c number
m=medal no
a=123456789
b=112112112
*/