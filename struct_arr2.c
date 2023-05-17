#include <stdio.h>
typedef struct distance 
{
    int feet;
    float inch;
}sd;
int add(struct distance d[],int sz){
    int sum1=0;
    float sum2=0.0;
    for(int i=0;i<sz;i++){
        sum1.feet=sum1.feet+d[i];
        sum2.inch=sum2.inch+d[i];
        
    }
    if (sum2.inch >= 12) {
            sum1.feet += sum2.inch / 12;
            sum2.inch %= 12;
    }
    printf("the sum of distance is %d feet %d inches", sum1 , sum2);
}


int main(){
    int sz;
    printf("enter the number of objects");
    scanf("%d",&sz);
    sd d[sz];
    for(int i=0;i<sz;i++){
        scanf("%d %f",&d[i].feet,&d[i].inch);
    }
    add(d,sz);

}