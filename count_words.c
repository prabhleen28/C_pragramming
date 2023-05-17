#include <stdio.h>
int main(){
    char str[100];
    gets(str);
    int i=0,l=0;
    while(str[i]!='\0'){
        l++;
        i++;
    }
    int j;
    for(j=0;j<l/2;j++){
        char temp = str[j];
        str[j]=str[l-j-1];
        str[l-j-1]=temp;
    }
    puts(str);
}