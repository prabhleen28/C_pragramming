#include <stdio.h>
struct fruits
{
    char name[20];
    char color[10];
    float weight;

    struct vehicle
    {
        char name[20];
        char color[20];
        int weight;
    }v,g,h;
}f;
//structure variable = object
//anything in curly brackets members
//frits tagname

int main(){
    struct fruits s ={"apple","red",1};
    printf("name = %s \n", s.name);
    struct vehicle v
}