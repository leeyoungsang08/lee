#include <stdio.h>

double calcPulseWidth(int angle)
{
    double pulseWidth;
    double minPulseWidth = 1.0;
    double maxPulseWidth = 2.0;

    pulseWidth = minPulseWidth + (angle / 180.0) * (maxPulseWidth - minPulseWidth);
    return pulseWidth;
}

double calcDuty(double pulseWidth)
{
    double duty;
    duty = (pulseWidth / 20.0) * 100.0;

    return duty;
}

int main(void)
{
    int angle;
    scanf("%d", &angle);

    double pulseWidth = calcPulseWidth(angle);
    double duty = calcDuty(pulseWidth);

    printf("pulseWidth : %.2lfms\n", pulseWidth);
    printf("duty : %.2lf%\n", duty);
}