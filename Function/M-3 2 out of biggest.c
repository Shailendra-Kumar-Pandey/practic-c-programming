/* Write a Program to Compare and Print of Biggest out of 2 Number */
// Method No.03  -  taking nothing return nothing
#include<stdio.h>
void big();
int main()
{
    big();
    return 0;
}
void big()
{    int x, y;
    printf("\nEnter the Number :");
    scanf("%d%d",&x,&y);
    if(x>y)
        printf("\nBiggest Number is = %d",x);
    else
        printf("\nBiggest Number is = %d",y);
}
