/* Write a Program to calculate and print factorial of Any Number */

#include<stdio.h>
int main()
{       /* CD=1; i=i+1, i+1=1, i=1-1, i=0; t=1, t=t*i; n */
    float i= 0, t=1,n;
    printf("\n Enter any Number find Factorial : ");
    scanf("%f",&n);
    while (i<n)
    {
        i = i+1;
        t = t*i;
        printf("\n %f ",i);
    }
    printf("\n\n Factorial is = %f",t);
    return 0;
}
