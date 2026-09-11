#include <stdio.h>

int main(void)
{
    int ary[5][6];
    int count = 1;

    for(int i =0 ; i< 5 ; i++)
    {
        for(int j=0;j<6;j++)
        {
            if(j==5)
               {
                    ary[i][5] = ary[i][0] +ary[i][1] +ary[i][2] +ary[i][3]+ary[i][4];  
                    printf("%5d ", ary[i][j]);
                    continue;   
                } 
            
            if(i==4)
                {
                    ary[4][j] = ary[0][j] +ary[1][j] +ary[2][j] +ary[3][j];
                    printf("%5d ", ary[i][j]);
                    continue;  
                }    
                    ary[i][j] = count;
                    printf("%5d ", ary[i][j]);
            count++;
        }
        printf("\n");
    }
}