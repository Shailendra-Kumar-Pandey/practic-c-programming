/* Write a Program to calculate and print factorial of 5! */

#include<stdio.h>
int main()
{
    int i= 0, t=1;
    while (i<5)
    {       /* CD=1; i=i+1, i+1=1, i=1-1, i=0; t=1, t=t*i; */
        i = i+1;
        t = t*i;
        printf("\n %d ",i);
    }
    printf("\n\n Factorial is = %d",t);
    return 0;
}
