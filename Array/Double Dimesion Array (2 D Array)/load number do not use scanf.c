/* Create an array 4 by 4 and load it with given Number-
    1   2   3   4
    2   4   6   8
    3   6   9   12
    4   8   12  16
Do not use scanf */
#include<stdio.h>
int main()
{
    int a[4][4],i,j,r1=0,r2=0,r3=0;
    for ( i = 0; i <= 3; i++)
    {
        for ( j = 0; j <= 3; j++)
        {
            if(i==0)
                a[i][j] = j+1;
            if(i==1)
            {   r1 = r1 + 2;
                a[i][j] = r1;
            }
            if(i==2)
            {   r2 = r2 + 3;
                a[i][j] = r2;
            }
            if(i==3)
            {   r3 = r3 + 4;
                a[i][j] = r3;
            }
        }
    }
    printf("\n Array Element are \n");
    for ( i = 0; i <= 3; i++)
        printf("\n%d \t%d \t%d \t%d",a[i][0],a[i][1],a[i][2],a[i][3]);
    return 0;
}
