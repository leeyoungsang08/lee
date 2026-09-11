#include <stdio.h>

typedef struct score
{
    int korean;
    int english;
    int math;
}Score;

typedef struct list
{
    int id;
    char name[20];
    Score s; 
} List;

int main(void)
{
    List student[5]=
    {
        {315, "홍길동", 80, 75, 90},
        {316, "이순신", 88, 92, 100},
        {317, "서하윤", 95, 99, 98},
        {318, "유관순", 84, 70, 72},
        {319, "박신혜", 60, 65, 40}
    };
    List temp;
    for(int i=0 ; i< 5; i++)
        {
            for(int j=i+1; j<5; j++)
            {
                if(student[i].s.korean+student[i].s.english+student[i].s.math < student[j].s.korean+student[j].s.english+student[j].s.math)
                {
                    temp = student[i];
                    student[i] = student[j];
                    student[j] = temp;
                }
            }
        }

    int sum[5] = {0};
    double mean[5];
    char grade[5];
    
    for(int i=0 ; i<5 ; i++)
    {
        sum[i] = student[i].s.korean + student[i].s.english +  student[i].s.math;
    }

    for(int i=0 ; i<5 ; i++)
    {
        mean[i] = sum[i] / 3.0; 
        if(mean[i] >= 90.0)
            grade[i] = 'A';
        else if(mean[i] >= 80.0)
            grade[i] = 'B';
        else if(mean[i] >= 70.0)
            grade[i] = 'C';
        else 
            grade[i] = 'F';
            
    }

    for(int i=0 ; i<5 ; i++)
    {
        printf("%d %s %d %d %d %d %.1lf %c", student[i].id, student[i].name, student[i].s.korean, student[i].s.english, student[i].s.math, sum[i], mean[i], grade[i]);
        printf("\n");
    }
}