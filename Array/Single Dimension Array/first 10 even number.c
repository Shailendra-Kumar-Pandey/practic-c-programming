/* create an array of size 10 first even number */
#include<stdio.h>
int main()
{
    int a[10],i,n=0;
    for ( i = 0; i <= 9; i++)
    {
        n = n+2;
        a[i] = n;
    }
    for ( i = 0; i <= 9; i++)
        printf(" %d ",a[i]);
    return 0;
}