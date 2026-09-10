#include <stdio.h>

int  main(void)
{
    char box1[5][5];
    char box2[5][5];
    char box3[5][5];

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
            {
                if(i==j)
                    box1[i][j] = '*';
                if(j+i==4)
                    box2[i][j] = '*';
                    
                if(box1[i][j] == '*' && box2[i][j] == '*')
                    box3[i][j] ='*';
                else if (box1[i][j] == '*' || box2[i][j] =='*')
                    box3[i][j] ='*';
            }
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
           printf("%c ", box3[i][j]);
           printf("\n");
    }

}