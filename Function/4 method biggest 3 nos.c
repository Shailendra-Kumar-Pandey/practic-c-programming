/* Write a Program to compare to print Biggest out of 3
Take Nothing Return Something*/
#include<stdio.h>
int big();
int main()
{
    int d;
    d = big();
    printf("\n Biggest Number is = %d",d);
    return 0;
}

int big()
{   int x, y, z, big;
    printf("\n Enter 3 Numbers :");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y && x>z)
        big = x;
    else
        if(y>z)
            big = y;
        else
            big = z;
    return (big);
}
