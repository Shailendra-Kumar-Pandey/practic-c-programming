/* Write a Program to Campare and Print of Biggest out of 2 Number */
#include<stdio.h>
int big(int,int);
int main()
{
    int a, b, c;
    printf("\nEnter the Number :");
    scanf("%d%d",&a,&b);
    c = big(a,b);
    printf("\nBiggest Number is = %d",c);
    return 0;
}
int big(int x, int y)
{
    if(x>y)
        return (x);
    else
        return (y);
}
