/* Create an array 4 by 4 at load at with even Number 10 to up finally print array */
#include<stdio.h>
int main()
{
    int a[4][4],i,j,e=10;
    for ( i = 0; i <= 3 ; i++)
    {
        for ( j = 0; j <= 3; j++)
        {
            a[i][j] = e;
            e = e + 2;
        }
    }
    printf("\n Array are Ever Number element:- \n");
    for ( i = 0; i <= 3; i++)
        printf("\n %d \t%d \t%d \t%d",a[i][0],a[i][1],a[i][2],a[i][3]);
    return 0;
}
