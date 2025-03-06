/* Write a program given number in 2 Number Swap */

#include<stdio.h>
int main()
{
    int a, b;
    printf("\n Enter the two number :");
    scanf("%d%d",&a,&b);
    if(a<b)
        printf("\n this is a assending order = %d %d",a,b);
    else
        printf("\n this is a assending order = %d %d",b,a);
    return 0;
}