#include <stdio.h>

typedef struct student
{
    int age;
    double grade; 
}Student;

int main(void)
{
    Student lee = {20, 20.22};

    printf("%d",lee.age);
}