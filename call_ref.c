#include<stdio.h>
void display1(int m);
void display2( int *p);
int main(){
    int i;
    int marks[]={55,56,57,58,87,90,23,45};
    for(int i=0;i<=6;i++){
        display1(marks[i]);
    }
    for(int i=0;i<=6;i++){
        display2(&marks[i]);

    }
    return 0;
}
void display1(int m){
    printf("%d \n",m);
}
void display2(int *p){
    printf("%u \n",*p);
}