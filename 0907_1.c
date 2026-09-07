#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;
    int max = 0;
    int min = 200;
    srand(time(NULL));

    scanf("%d", &n);

    int a[n];

    a[0] = rand() % 200;

    if(a[0] > max)
        max = a[0];
    if


    int count =0;
    int count1 =0;

    for(int i = 1; i < n; i++)
    {
        if(a[i]-a[i-1] >=7)
            count++;
        else if(a[i]-a[i-1] <= -7)
            count1++;
    }

    printf("급가속: %d\n", count);
    printf("급제동: %d\n", count1);

    return 0;
}