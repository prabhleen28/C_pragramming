#include<stdio.h>
struct students{
    int rollno;
    char name[20];
    float percent;
};
int main(){
    int size,t=1;
    printf("enter the number of test cases");
    scanf ("%d" ,&t);

    while(t--){
    printf("enter the number of objects ");
    scanf("%d",&size);
    struct students s[size];
    for(int i=0;i<size;i++){
        scanf("%d %s %f",&s[i].rollno,s[i].name,&s[i].percent);//if string datatype no need for &
    }
    for(int i=0;i<size;i++){
    printf("%d %s %f\n",s[i].rollno,s[i].name,s[i].percent);}
    }
    return 0;
}