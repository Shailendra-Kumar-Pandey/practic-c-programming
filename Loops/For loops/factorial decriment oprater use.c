/* Write a Program to calculate and print any Number of Factorial using decriment oprators */

#include<stdio.h>
int main()
{
    int i;
    float f=1;
    printf("\n Enter any Number Find Factorial :");
    scanf("%d",&i);
    for ( i = i; i > 0; i=i-1)
    {
        f = f * i;
    }
    printf("\n Factorial is =%f",f);
    return 0;
}
