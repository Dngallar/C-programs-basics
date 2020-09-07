#include <stdio.h>
#define KLIMIT 6

void fibonacci(int limit)
{

    int i_1 = 0;
    int i_2 = 1;
    int j = 0;

    printf("The first %i Fibonacci numbers are:\n", limit);
    printf("%i\n", i_1);

    while (j < limit - 1) 
    {
        printf("%i\n", i_2);
        int temp = i_2;
        i_2 += i_1;
        i_1 = temp;
        j++;
    }
}

main() 
{
    fibonacci(KLIMIT);
}
