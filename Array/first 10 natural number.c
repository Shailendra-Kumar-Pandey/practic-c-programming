/* create an array of size 10 load it with first 10 natural number  */
#include<stdio.h>
int main()
{
    int a[10],i;
    for ( i = 0; i <= 9; i++)
        a[i]=i+1;
    for ( i = 0; i <= 9; i++)
        printf(" %d ",a[i]);
    return 0;   
}