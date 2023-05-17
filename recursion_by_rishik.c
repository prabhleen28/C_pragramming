#include<stdio.h>
int func_sum(int num){
    if(num==0 || num==1){
        return num;
    }
    return num+func_sum(num-1);
}
int main(){
    // int a=5,b=10;
    // printf("%d %d",a , b);
    // printf("my %% is 98");
    int num;
    scanf("%d",sum);
    printf("%d",func_sum(num));
}