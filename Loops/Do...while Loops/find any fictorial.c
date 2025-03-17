/* Write a Program to calculate and print Factorial any Number */
#include<stdio.h>
int main()
{
    int  i = 0, n;
    float f = 1;
    printf("\n Enter any Number : ");
    scanf("%d",&n);
    do
    {
        i = i+1;
        f = f*i;
    } while (i<n);
    printf("\n Factorial is = %f",f);
    return 0;
}
