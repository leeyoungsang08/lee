#include <stdio.h>
#include <math.h>

int main(void)
{
    int rank;
    int m = 0;

    scanf("%d", &rank);

    switch(rank)
    {
        case 1:
            m = 100;
            break;
        case 2:
            m = 200;
            break;
        case 3:
            m = 300;
            break;
        case 4:
            m = 400;
            break;
    }

    printf("%d\n", m);

}