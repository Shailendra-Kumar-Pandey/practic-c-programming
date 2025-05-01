/* Write a Program to Compare and Print of Biggest out of 2 Number */
// Method No.04  -  taking nothing return something
#include<stdio.h>
int big();
int main()
{   int z;
    z = big();
    printf("\nBiggest Number is = %d",z);
    return 0;
}
int big()
{    int x, y;
    printf("\nEnter the Number :");
    scanf("%d%d",&x,&y);
    if(x>y)
        return(x);
    else
        return(y);
}
