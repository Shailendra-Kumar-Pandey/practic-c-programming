/* Write a Program to calculate and print factorial of 7! */

#include<stdio.h>
int main()
{       /* CD=1; i=i+1, i+1=1, i=1-1, i=0; t=1, t=t*i; */
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
