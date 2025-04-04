/* Write a Program to compare to print Biggest out of 3 
Take Something Return Something*/
#include<stdio.h>
int big(int,int,int);
int main()
{
    int a, b, c, d;
    printf("\n Enter 3 Numbers :");
    scanf("%d%d%d",&a,&b,&c);
    d = big(a,b,c);
    printf("\nBiggest Number is = %d",d);
    return 0;
}

int big(int x, int y, int z)
{
    if(x>y && x>z)
        return (x);
    else
        if(y>z)
            return (y);
        else
            return (z);
}
