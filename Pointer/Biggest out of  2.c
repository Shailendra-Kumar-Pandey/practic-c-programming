/* Write a Program to compare and print Biggest out of 2 */
#include<stdio.h>
int big(int *,int *);
int main()
{
    int a, b, big1;
    printf("\n Enter 2 Number : ");
    scanf("%d %d",&a,&b);
    big1 = big(&a,&b);
    printf("\n Biggest Number is = %d",big1);
    return 0;
}
int big(int *x, int *y)
{
    if((*x)>(*y))
        return (*x);
    else
        return (*y);
}
