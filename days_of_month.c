#include <stdio.h>
int main(){
    int x;
    printf("Enter the month for the days");
    scanf("%d",&x);
    switch (x){
    case 1:{
        printf("The days are: 31");
        break;
    }
    case 2:{
        printf("The days are: 28 or 29");
        break;
    }
    case 3:{
        printf("The days are: 31");
        break;
    }
    case 4 :{
        printf("The days are: 30");
        break;
    }
    case 5:{
        printf("The days are: 31");
        break;

    }
    case 6:{
        printf("The days are: 30");
        break;
    }
    case 7:{
        printf("The days are: 31");
        break;
    }
    case 8:{
        printf("The days are: 31");
        break;
    }
    case 9:{
        printf("the days of the month are : 30");
        break;
    }
    case 10: {
        printf("the days are: 31" );
        break;
    }
    case 11:{
        printf("the days are: 30");
        break;
    }
    case 12:{
        printf("The days are : 31");
        break;

    }
    default:{
        printf("Error");
    }
    }
}