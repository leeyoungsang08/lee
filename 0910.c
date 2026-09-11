#include <stdio.h>

int main(void)
{
    char *arr[5];

    arr[0] = "ab";
    arr[1] = "cd";
    arr[2] = "ef";
    arr[3] = "gh";
    arr[4] = "ij";

    for(int i=0; i<5; i++)
        {
            printf("%s ", arr[i]);
            printf("%p ", arr[i]);
        }
}