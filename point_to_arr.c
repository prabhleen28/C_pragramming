// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     //int *p=arr;
//     int (*p)[4];
//     p= &arr;
//     for(int i=0;i<n;i++){
//         printf("%d ",*((*p)+i));
//     }
// }#include<stdio.h>
int main()
{
    int a[2][4]={{1,2,4,4},{2,3,5,6}};
    for(int i=0;i<2;++i)
    {
        for(int j =0 ;j<4;++j)
        {
            printf(" %d ",*  (   *(a+i)+j));
        }
        printf("\n");
    }
    return 0; 
}