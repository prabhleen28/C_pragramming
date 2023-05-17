#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    char a='A';
    int i=1;
    while(i<=ch-'A'+1){
        int j=1;
        while(j<=i){
            if(j!=i){
                printf("%c ",a);
            }
            else{
                printf("%c",a);
            }
            j++;
        }
        printf("\n");
        a++;
        i++;
    }
}