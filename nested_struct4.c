#include<stdio.h>

struct info{
    int id;
    char gender;
};

struct student{
    int roll;
    char name[29];
    struct info inf;

    struct ronaldo{
        int goals;
        int Matches;
    }ronnie;
};

int main(){
    struct student sidhant = {4 , "sidhant" , {29 , 'M'} , {826 , 1025}};
    printf("%d %s %d %c %d %d",sidhant.roll , sidhant.name , sidhant.inf.id , sidhant.inf.gender , sidhant.ronnie.goals , sidhant.ronnie.Matches);

    return 0;
}