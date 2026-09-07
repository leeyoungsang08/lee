#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    srand(time(NULL)); // Seed the random number generator with the current time
    int r1 = rand() % 100;
    int r2 = rand() % 10;

    printf("Random number 1: %d\n", r1);
    printf("Random number 2: %d\n", r2);

    
}