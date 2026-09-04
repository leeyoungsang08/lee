#include <stdio.h>
#include <math.h>

int main(void)
{
    double N, M, G, n, T, r, m, c, SF;
    double g = 9.81;

    scanf("총 질량 : %lf", &m);
    scanf("모터 정격토크 : %lf", &T);
    scanf("구동 모터 수 : %lf", &N);
    scanf("감속비 : %lf", &G);
    scanf("구동 효율 : %lf", &n);
    scanf("바퀴 반지름 : %lf", &r);
    scanf("구름계수 : %lf", &c);
    scanf("안전계수 : %lf", &SF);

    double Favail = T / r;
    double theta = asin((Favail/SF - c * m * g)/(m*g));
    double theta_deg = theta * 180 / 3.14;

    printf("%lf", theta_deg);
}