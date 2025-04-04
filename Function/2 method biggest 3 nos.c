/* Write a Program to compare to print Biggest out of 3
Take Something Return Nothing*/
#include<stdio.h>
void big(int,int,int);
int main()
{
    int a, b, c, d;
    printf("\n Enter 3 Numbers :");
    scanf("%d%d%d",&a,&b,&c);
    big(a,b,c);
    return 0;
}

void big(int x, int y, int z)
{   int big;
    if(x>y && x>z)
        big = x;
    else
        if(y>z)
            big = y;
        else
            big = z;
    printf("\nBiggest Number is = %d",big);
}
