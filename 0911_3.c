#include <stdio.h>

struct score
{
int kor;
int eng;
int math;
};

int main(void)
{
    struct score lee = {10, 20, 30};
    struct score *plee = &lee;

    printf("%d\n", plee -> kor);
    printf("%d\n", plee -> eng);
    printf("%d\n", plee -> math);
    
}