/* Create an Array of size 3 by 3 and load it with first 9 Natural Number  */
#include<stdio.h>
int main()
{
    int a[3][3],i,j,c=0;
    for ( i = 0; i <= 2; i++)
    {
        for ( j = 0; j <= 2; j++)
        {
            c = c + 1;
            a[i][j] = c;
        }
    }
    printf("\n Array element are :- \n");
    for ( i = 0; i <= 2; i++)
        printf("\n %d \t%d \t%d",a[i][0],a[i][1],a[i][2]);
    return 0;    
}