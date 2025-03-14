/* Write a Program to input 4 Digit Number and print sum of its digits. 2671 = 16 */

#include<stdio.h>
int main()
{
    int a,b,c,d,sum;
    printf("\n Enter only Four Digit Number : ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    sum = a+b+c+d;
    printf("\n %d",sum);
    return 0;
}