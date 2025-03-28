/* Write a program to calculate and print Factorial any Number */
#include<stdio.h>
int main()
{
    int i,n;
    float f=1;
    printf("\n Enter any Number : ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        f = f*i;
    }
    printf("\n Factorial = %f",f);
    return 0;
}
