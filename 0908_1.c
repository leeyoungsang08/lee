#include <stdio.h>

int main(void)
{
    int n;
    printf("n : ");
    scanf("%d", &n);
    int adc[n];

    printf("adc : ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &adc[i]);
    }

    double vref, k;
    printf("vref : ");
    scanf("%lf", &vref);
    printf("k : ");
    scanf("%lf", &k);

    double v[n];
    for(int i = 0; i < n; i++)
    {
        v[i] = (adc[i] / 1023.0) * vref;
        if(v[i] == 0)
        {
            v[i] = 0.01;
        }
    }

    double distance[n];
    distance[0] = k / v[0];
        
    double max =0;
    double min = distance[0];
    for(int i = 0; i < n; i++)
    {
        distance[i] = k / v[i];
        if(distance[i] > max)
        {
            max = distance[i];
        }
        if(distance[i] < min)
        {
            min = distance[i];
        }
    }

    for(int i = 0; i < n; i++)
    {
        printf("%.2lf ", v[i]);
    }
    printf("\n");

    for(int i = 0; i < n; i++)
    {
        printf("%.2lf ", distance[i]);
    }

    printf("\nmax : %.2lf min : %.2lf\n", max, min);
}