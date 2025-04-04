/* Write a Program to compare to print Biggest out of 3 */
#include<stdio.h>
int data(int,int,int);
int main()
{
    int a, b, c, big;
    printf("\n Enter 3 Numbers :");
    scanf("%d%d%d",&a,&b,&c);
    big = data(a,b,c);
    printf("\nBiggest Number is = %d",big);
    return 0;
}

int data(int x, int y, int z)
{
    if(x>y && x>z)
        return (x);
    else
        if(y>z)
            return (y);
        else
            return (z);
}
