/* Write a Program to compare to print Biggest out of 3
Take Nothing Return Nothing*/
#include<stdio.h>
void big();
int main()
{
    big();
    return 0;
}

void big()
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
    printf("\nBiggest Number is = %d",big);
}
