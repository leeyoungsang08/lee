#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int sensor[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &sensor[i]);
    }

    int threshold;
    scanf("%d", &threshold);

    int count=0;    
    int sum=0;

    for(int i = 0; i < n; i++)
    {
        if(sensor[i] >= threshold)
            {
                sensor[i] = 0;
         }
        else
            {sensor[i] = 1;
            count++;}
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", sensor[i]);
        sum += (i * sensor[i]);

    }

    printf("\nblack_count : %d\n", count);

    double average;
    if(count == 0)
    {
        printf("no line\n");
    }
    else
    {
        double average = (double)sum / count;
        printf("average : %.2lf\n", average);
    }
}