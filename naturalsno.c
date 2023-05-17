#include <stdio.h>
int main(){
    int i,n,y;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("Natural numbers form 1 to %d : \n", n);
    for( i=1;i<=n;i++){
        printf("%d \n",i);
    }
    return 0;
}