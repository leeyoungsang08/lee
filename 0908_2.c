#include <stdio.h>
#define n_samples 10
#define warn_v 10.8
#define crit_v 10.2

int count(double voltage[])
{
    int count = 0;
    for(int i = 0; i < n_samples; i++)
    {
        if(voltage[i] < warn_v)
        {
            count++;
        }
    }
    return count;
}

void state(double voltage[])
{
    double min = voltage[0];
    for(int i = 0; i < n_samples; i++)
    {
        if(voltage[i] < crit_v)
            printf("Critical\n");
         if(voltage[i] < min)
            min = voltage[i];
    }
    printf("Minimum voltage: %.2lf\n", min);
}

int main(void)
{
    double voltage[n_samples];
    for(int i = 0; i < n_samples; i++)
    {
        scanf("%lf", &voltage[i]);
    }

    state(voltage);
    int warning_count = count(voltage);

    if(warning_count>=3)
        printf("state : Warning\n");
    else
        printf("state : Normal\n");
}
