#include <stdio.h>

#if x==3
#define y 3
#else
#define y 5
#endif
int main(){
    printf("%d",y);
    return 0;
}