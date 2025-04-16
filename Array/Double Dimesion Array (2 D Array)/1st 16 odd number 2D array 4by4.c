/* Create an array 4 by 4 size load it with first 16 odd number finally print array  */
#include<stdio.h>
int main()
{
    int a[4][4],i,j,odd = -1;
    for ( i = 0; i <= 3; i++)
    {
        for ( j = 0; j <= 3; j++)
        {
            odd = odd + 2;
            a[i][j] = odd;
        }
    }
    printf("\n Odd number in Array \n");
    for ( i = 0; i <= 3; i++)
        printf("\n%d \t%d \t%d \t%d",a[i][0],a[i][1],a[i][2],a[i][3]);
    return 0;
}
