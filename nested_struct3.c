// NEsted Structures 

//Types of nested structures

//1. declaring an entire structure in another structure 
//2. declaring one structure variable as another structure member 

#include <stdio.h>
struct address
{
    int pincode;
    char city[10];

}a,b;

struct students
{
    char name [10];
    int rollno;
    struct address a,b;
}s;


int main()
{
    scanf("%s",&s.name);
    printf("name = %s \n" ,s.name);
    struct address a={140147,"patiala"};
    printf("pincode = %d \n" ,a.pincode);
    return 0;
}