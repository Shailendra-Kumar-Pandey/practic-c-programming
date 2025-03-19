/* Write a Program to calculate and print Factorial of n Number */
#include<stdio.h>
int main()
{
    int i, n, j, m;
    float f ;
    printf("\n How many find Factorial :");
    scanf("%d",&n);
    for ( i = 0; i < n; i=i+1)
    {
        f = 1;
        printf("\n Enter the Number :");
        scanf("%d",&m);
        for ( j = 1; j <= m; j=j+1)
        {
            f = f*j;
        }
        printf("\n Factorial is = %f",f);
    }
    return 0;
}
