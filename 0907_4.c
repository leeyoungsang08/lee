#include <stdio.h>

int main(void)
{
    int ary[3];
    int i;

    *(ary + 0) = 10;
    *(ary + 1) = *(ary + 0) + 10;

    printf("ary[0] : %d\n", *(ary + 0));

    printf("ary[0] : %d\n", (ary + 0));
}