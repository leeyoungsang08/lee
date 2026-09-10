#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[80];

    fgets(str, sizeof(str), stdin);
    str[strlen(str)-1] = '\0';

    printf("%s", str);
}