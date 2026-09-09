#include <stdio.h>

swap(int *pa, int *pb)
{
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}
int main(void)
{
    int a = 10;
    int b = 20;

    swap(&a, &b);

    printf("a = %d b = %d", a, b);
}