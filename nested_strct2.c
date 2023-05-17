#include <stdio.h>
struct stdents{
    char name[10];
    int roll_no;
    struct address a,b;
}s;
struct address {
    int pin_code;
    char city[10];
};