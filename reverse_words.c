#include <stdio.h>
int main(){
    char str[100];
    gets(str);
    int count =1,i=0,l=0;
    while(str[i]!='\0'){
        l++;
        i++;
    }
    int j=0;
    while(str[j]!='\0'){
        if(str[j]==' '||str[j]=='\t'||str[j]=='\n'){
            count++;
        }
        j++;
    }
    printf("%d",count);
}