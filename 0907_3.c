#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int *pa = &a;
    int *pb = &b;
    int *pc = &c;

    printf("a : %d\n", *pa);
    printf("&a : %p\n", pa);
    printf("b : %d\n", *pb);
    printf("&b : %p\n", pb);     
    
    printf("sizeof(a) : %d\n", sizeof(a));
    printf("sizeof(b) : %d\n", sizeof(pa));
}