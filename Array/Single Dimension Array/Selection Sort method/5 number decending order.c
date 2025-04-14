/* Create an array of size 05 inputting number and show descending order print array */
#include<stdio.h>
int swap(int,int);
int main()
{
    int a[5],i,j,big;
    for ( i = 0; i <= 4; i++)
    {
        printf("\n Enter the Number :");
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <=3; i++)
    {
        for ( j = i+1; j <=4 ; j++)
        {
            if (a[j]>a[i])
            {
                big = a[i];
                a[i]=a[j];
                a[j]=big;
            }
        }
    }
    for ( i = 0; i <= 4; i++)
        printf(" %d ",a[i]);
    return 0;
}
