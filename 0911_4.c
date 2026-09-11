#include <stdio.h>

struct address
{
    char name[20];
    int age;
};

void print(struct address *list)
{
    for(int i=0 ; i<2; i++)
        printf("%s %d", (list+i)->name, (list+i)->age);
}

int main(void)
{
struct address list[2]=
{
    {"이영상", 22},
    {"이순신", 23}
};

print(list);
}