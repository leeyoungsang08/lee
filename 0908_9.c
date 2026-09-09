#include <stdio.h>

void my_strlen(char *text)
{
    int count=0;
    while(*text != '\0')
        {
            text ++;
            count++;
        }
    printf("len : %d", count);
}

int main(void)
{
    char text[100];

    fgets(text, sizeof(text), stdin);
    
    my_strlen(text);
}