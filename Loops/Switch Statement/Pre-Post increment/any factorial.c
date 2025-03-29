/* Write a program to calculate and print Factorial any Number */
#include<stdio.h>
int main()
{
    int n;
    float f=1;
    printf("\n Enter any Number : ");
    scanf("%d",&n);
    while(n>0)
    {
        f = f*n--;
    }
    printf("\n Factorial = %f",f);
    return 0;
}
