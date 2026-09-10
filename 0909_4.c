#include <stdio.h>
#include <string.h>

void stradd(char *str, char *str2)
{
    char str3[80];
    int i=0;
    int j=0;

    for(i=0 ; i< strlen(str) ; i++)
    {
        str3[i] = str[i];
    }
    for(j=0 ; j< strlen(str2) ; j++)
    {
        str3[i + j] = str2[j];
    }
        str3[i + j] = '\0';
    
    
    printf("%s", str3);
}

int main(void)
{
    char str[80];
    char str2[80];

    scanf("%s", str);
    scanf("%s", str2);
    
    stradd(str, str2);
}