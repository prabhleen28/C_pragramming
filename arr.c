// #include <stdio.h>
// //#DEFINE a 5
// int main(){
//     //int x1[];
//     //int x2[-4];
//     int a=6;
//     int x3[a+2];
//     // -ve number not allowed and [] should not be empty in declaration of array
    
// }
#include <stdio.h>
void fun (int ,int*);
int main(){
    // int i=-5,j=-2;
    // fun(i,&j);
    // printf("i= %d j= %d \n",i,j);
    // return 0;
    // printf("%d %d \n" , sizeof(NULL),sizeof(""));
    // int a=10,*j;
    // void *k;
    // j=k=&a;
    // printf("%u %u \n",j,k);
    // j++;
    // k++;
    // printf("%u %u \n",j,k);
    // float *p1,i=25.50;
    // char *p2;
    // p1=&i;
    // p2=&i;

    int arr[2][2] = {{7, 6}, {5, 8}};
    printf("%d", (*(*arr) + 1) + (*(*(arr+1)))+1);

     return 0;
}
// void fun(int i, int *j)
// {
//     i=i * i;
//     *j= *j * *j;
// }