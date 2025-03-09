/* Write a Program to given 3 Number find assending order */
#include<stdio.h>
int main()
{
    int a, b;
    printf("\n Enter 2 Number : ");
    scanf("%d %d",&a,&b);
    if(a<b)
        printf("\n assending order = %d,%d",a,b);
    else
        printf("\n assending order = %d,%d",b,a);
    return 0;
}