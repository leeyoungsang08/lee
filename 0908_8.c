#include <stdio.h>

void print(int *a, int size)
{ 
for(int i=0; i<size; i++)
{
    printf("%d ", *a+i);
}
}

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};

    int size = sizeof(arr)/sizeof(arr[0]);
    print(arr, size);
}