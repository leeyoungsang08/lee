#include <stdio.h>

int main(void)
{
    int score[2][3][4] =
    {
        {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}},
        {{11,22,33,44}, {55,66,77,88}, {99,100,110,120}}
    };

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<4;k++)
                printf("%d ", score[i][j][k]);
            printf("\n");
        }
        printf("\n");
    }
}