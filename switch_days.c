#include<stdio.h>
int main(){
    int d;
    printf("Enter the number of the day: ");
    scanf("%d",&d);
    switch(d){
        case 1:{
        printf("Monday");
        break;
        }
        case 2:{
            printf("Tuesday");
            break;
        }
        case 3:{
            printf("Wednesday");
            break;
        }
        case 4:{
            printf("Thrusday");
            break;
        }
        case 5:{
            printf("Friday");
            break;
        }
        case 6:{
            printf("Satruday");
            break;
        }
        case 7:{
            printf("Sunday");
            break;
        }
        default:{
            
        }
    }
    return 0;
}