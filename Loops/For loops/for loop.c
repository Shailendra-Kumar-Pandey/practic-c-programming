/* Write a Program to calculate and print factorial of 5! */

#include<stdio.h>
int main()
{
    int t=1;
    for (int i=1; i<=5; i++)
    {
        t = t*i;
        printf("\n %d ",i);
    }
    printf("\n\n Factorial is = %d",t);
    return 0;
}
