#include <stdio.h>
#include <math.h>

int main(void)
{
    int i_load, vel, R;
    int V, C, eta;

    scanf("%d", &m);
    scanf("%d", &N);
    scanf("%d", &SF);
    scanf("%lf", &DM);
    scanf("%d", &torque);
    scanf("%d", &G);
    scanf("%lf", &R);

    printf("------이동로봇 설계 사양------\n");
    printf("총 하중(kg) : %d\n", m);
    printf("구동 바퀴 수 : %d\n", N);
    printf("안전 계수 : %d\n", SF);
    printf("설계 마진 : %lf\n", DM);

    printf("------모터 및 바퀴 사양------\n");
    printf("모터 정격 토크(N.m) : %d\n", torque);
    printf("감속비 : %d\n", G);
    printf("바퀴 반지름(m) : %lf\n", R);
    printf("--------------------------\n");

    Fmin = c * m * 9.81 * SF * DM;
    Fmotor = torque * G * N / R;

    printf("필요한 최소 견인력 : %.2lf\n", Fmin);
    printf("모터가 낼 수 있는 견인력 : %.2lf\n", Fmotor);
    
    if(Fmotor >= Fmin)
        printf("만족\n");
    else
        printf("불만족 (더 큰 모터나 감속비가 필요합니다.)\n");
}