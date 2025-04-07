/* Write a Program to input a number and print Sum of Digit */
#include<stdio.h>
int digit (int *);
int main()
{
    int d, digit1;
    printf("\n Enter the Number : ");
    scanf("%d",&d);
    digit1 = digit(&d);
    printf("\n Sum of Digit = %d",digit1);
    return 0;
}
int digit(int *x)
{
    int d, sum=0;
        while (*x>0)
        {
            d= (*x) % 10;
            sum = sum + d;
            (*x) = (*x)/10;
        }
    return (sum);        
}