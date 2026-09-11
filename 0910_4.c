#include <stdio.h>

int main(void)
{
    int a=10;
    double b=3.5;
    void *p;

    p = &a;
    printf("%d ", *(int *)p);
}