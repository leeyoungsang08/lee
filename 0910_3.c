#include <stdio.h>

int main(void)
{
    int a=1;
    int b=2;
    int c=3;

    int *pa = &a;
    int **ppa =  &pa;
    int ***pppa = &ppa;

    printf("%d", ***pppa);
}