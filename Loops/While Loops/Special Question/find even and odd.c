/* Write a Program to check and print whether given Number is even or odd */

#include<stdio.h>
int main()
{
    int a;
    printf("\n Enter the number : ");
    scanf("%d",&a);
    if(a%2==0)
        printf("\n This is Even Number = %d ",a);
    else
        printf("\n This is Odd Number = %d",a);
    return 0;    
}