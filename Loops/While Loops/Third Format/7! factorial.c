/* Write a Program to calculate and print factorial of 7! */

#include<stdio.h>
int main()
{
    int i= 0, t=1;
    while (i<7)
    {
        i = i+1;
        t = t*i;
        printf("\n %d ",i);
    }
    printf("\n\n Factorial is = %d",t);
    return 0;
}
