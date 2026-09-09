#include <stdio.h>

int main(void)
{
    int n = 10;
    double data[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%lf", &data[i]);
    }

    double min = data[0];
    double answer;

    for(int i = 0; i < n; i++)
    {
        if(data[i] < min)
        {
            min = data[i];
            answer = i * (360.0/10.0);
        }
    }

    printf("The minimum value is: %lf\n", min);
    printf("The minimum value angle: %.2lf\n", answer);

}