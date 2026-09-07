 #include <stdio.h>
 #include <math.h>

int main(void)
{
    double r, W, yL, yR, L;
    
    scanf("%lf %lf %lf %lf %lf", &r, &W, &yL, &yR, &L);

    double rL, rR,DL, DR, RC, Ddrift;

    rL = r * (1.0+yL/100);
    rR = r * (1.0+yR/100);


    RC = (W / 2.0) * (rL + rR)/(rR - rL);
    Ddrift = RC * (1 - cos(L / RC));

    printf("%lf %lf %lf %lf \n", rL, rR, RC, Ddrift);

}