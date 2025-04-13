/* create an array of size odd number 11 on */
#include<stdio.h>
int main()
{
    int a[15],i,n=11;
    for ( i = 0; i <= 14; i++)
    {
        a[i] = n;
        n = n+2;
    }
    for ( i = 0; i <= 14; i++)
        printf(" %d ",a[i]);
    return 0;
}
