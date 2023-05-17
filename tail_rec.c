#include <stdio.h>
void Deccrement(int j){
    if(j==0)
    return;
    Decrement(j-1);
    printf("%d",j);
}
int main(){
    int n;
    scanf("%d",&n);
    Decrement(n);
}