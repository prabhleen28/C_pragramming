// #include<stdio.h>
// int main(){
//     FILE *fptr;
//     fptr = fopen("new1test.txt","r");
//     if(fptr==NULL){
//         printf("file doesn't exist");
//     }
//     fclose(fptr);
// }

#include <stdio.h>
int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 50; i <= n; ++i) {
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}
