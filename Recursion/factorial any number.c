/* Write a program to calculate factorial of any number (using recursion) */
#include<stdio.h>
int factorial(int);
void main()
{
    int a, fact;
    printf("\nEnter any Number :");
    scanf("%d",&a);
    fact = factorial(a);
    printf("\n Factorial = %d",fact);
}
int factorial (int x)
{
    int f;
    if(x==1)
        return (1);
    else
        f = x * factorial(x - 1);
    return (f);
}

/*
        a   fact  x     f
        5   120   5    120
                  4
                  3
                  2
                  1     

*/