/* Write a Program to calculate and print factorial of Any Number */

#include<stdio.h>
int main()
{
    int i= 0, t=1,s=0;
    while (i<5)
    {
        i = i+1;
        t = t*i;
        s = s+t;
        printf("\n %d ",i);
    }
    printf("\n\n Factorial is = %d",s);
    return 0;
}
