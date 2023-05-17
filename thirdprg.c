#include <stdio.h>
int main(){
    double x= 3.4;
    printf("%0.15lf", x );
    double a= 3.425625;
    printf("%.15lf" , a);
    double b= 3.4256256;
    printf("%.15lf", b);
    double t= 3.123456789012345;
    printf("%.15lf", t);
}