#include <stdio.h>
int main(){
    char c;
    printf("enter charecter to be checked");
    scanf("%c", &c);
    if((c>='a' && c<='z')||(c<='A' && c>='Z')){
        printf("Chrecter is alphabet = %c",c);
    }
    elseif(c>='1' && c<='10'){
        printf("Chrectere is digit = %c",c);
    }
    else{
        printf("It is  a special charecter= %c",c);
    }
}