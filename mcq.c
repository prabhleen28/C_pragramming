// #include <stdio.h>
// int main(){
//     int x=0,y=5,z=5;
   // x=y==z;
    // printf("%d",x);
    //printf(5+"GeeksQuiz");
    // if(0){
    //     printf("A");
    //     printf("B");
    // }
    // else
    //     printf("C");
    // printf("D");
    // avg>=60 print a if avg>35 and <60 then b, if avg<=35 print c
#include<stdio.h>
int main(){
    int avg;
    scanf("%d",&avg);

    // if(avg<=35){
    //     printf("c");
    // }
    // else if(avg>35 && avg<60){
    //     printf("b");
    // }
    // else if(avg>=60){
    //     printf("a");
    // }
    if(avg>=60)
    {
        printf("a");
    }
    else 
    {
        if(avg>35 && avg<60)
        {
            printf("b");
        }
        else{
            printf("c");
        }
    }
     
    return 0;
}