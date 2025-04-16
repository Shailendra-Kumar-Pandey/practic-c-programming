/* Create an array 4 by 4 and load it with number as will as biggest element of array */
#include<stdio.h>
int main()
{
    int a[4][4],i,j,big;
    for ( i = 0; i <= 3; i++)
    {
        for ( j = 0; j <= 3; j++)
        {
            printf("\n Enter the Number :");
            scanf("%d",&a[i][j]);
            if (a[i][j]>big)
                big = a[i][j];
        }
    }
    printf("\n Array Element are \n");
    for ( i = 0; i <= 3; i++)
        printf("\n%d \t%d \t%d \t%d",a[i][0],a[i][1],a[i][2],a[i][3]);
    printf("\n\n Biggest element in array = %d",big);
    return 0;
}
