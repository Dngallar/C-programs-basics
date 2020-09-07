
//Program to test define and boolean value

#include <stdio.h>
#include <stdbool.h>
#define TEST 5

typedef enum {True, False} Bool;

main() 
{
    int sz = sizeof(TEST);
    Bool comp = (1 == 2);
    printf("Value of TEST: %d\n", TEST);
    printf("Size of TEST: %d\n", sizeof(TEST));
    printf("1 == 2? %d\n", comp);
}
