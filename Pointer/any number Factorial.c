/* Write a Program to calculate to factorial of any Number */
#include<stdio.h>
int fact(int *);
int main()
{
    int n;
    float f1;
    printf("\nEnter Any Number : ");
    scanf("%d",&n);
    f1 = fact(&n);
    printf("\nFactorial is %d = %f",n,f1);
    return 0;
}
int fact(int *x)
{
    float f = 1;
    while (*x>0)
        f = f * (*x)--;
    return (f);
}