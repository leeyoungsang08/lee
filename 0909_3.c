#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[980] = "i am a human";
    char str1[980] = "i am a monkey";


    if(strcmp(str,str1)>0)
        printf("먼저 나오는 문자열은 %s", str);
        else
        printf("먼저 나오는 문자열은 %s", str1);
    
}