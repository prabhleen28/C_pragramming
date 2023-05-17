#include <stdio.h>
typedef struct students{
    int roll_no;
    char name[20];
    float percent;
}ss;
ss s3;
int main(){
    ss s1={1,"JOY",78.87};
    ss *p1=&s1;
    ss s2={2,"ndhi",56.78};
    s3=s1;
    printf("Details of Student 1 = %d %s %f \n",s1.roll_no,s1.name,s1.percent);
    printf("Details of Student 1 = %d %s %f \n",p1->roll_no, p1->name,p1->percent);
}