#include <stdio.h>

int main(void)
{
 char ch;
 char string[10];

 for(int i=0 ; i < 3 ; i++)
 {
    scanf("%c", &ch);
    printf("%c", ch);
 }

 fgets(string, sizeof(string), stdin);
 printf("%s", string);

 return 0;
}