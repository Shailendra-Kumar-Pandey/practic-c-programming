/* Write a Program to Compare and Print of Biggest out of 2 Number */
// Method No.02  -  taking something return nothing
#include<stdio.h>
void big(int,int);
int main()
{
    int a, b;
    printf("\nEnter the Number :");
    scanf("%d%d",&a,&b);
    big(a,b);
    return 0;
}
void big(int x, int y)
{
    if(x>y)
        printf("\nBiggest Number is = %d",x);
    else
        printf("\nBiggest Number is = %d",y);
}
