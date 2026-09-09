#include <stdio.h>

int main(void)
{
    int ary[3];
    int i;

    *(ary +) = 10;
    *(ary +1) = *(ary) + 10;
}