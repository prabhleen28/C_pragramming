#include<stdio.h>
struct students {
    int roll_no;
    char name[20];
    float percent;
};
int main(){
    struct students s[3] =
                            {
                                {1,"jiya",98},
                                {2,"joy",99},
                                {3,"taran",78}
                            };
    int i;
    for(i=0;i<3;i++){
    printf("%d %s %f \n",s[i].roll_no,s[i].name,s[i].percent);
    }
    return 0;
}