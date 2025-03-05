/* Write a Program to check and print whether given Number is 5 divisible or not */

#include<stdio.h>
int main()
{
    int a;
    printf("\n Enter The Number : ");
    scanf("%d",&a);
    if( a%5 == 0)
        printf("\n This Number is Divisible by 5 = %d",a);
    else
        printf("\n This Number is Not Divisible by 5 = %d",a);
    return 0;
}