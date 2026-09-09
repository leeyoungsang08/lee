#include <stdio.h>

int main(void)
{
    char small, cap = 'G';

    small = cap + 32;

    printf("%c\n", small);
    printf("%c\n", cap);

    return 0;
}