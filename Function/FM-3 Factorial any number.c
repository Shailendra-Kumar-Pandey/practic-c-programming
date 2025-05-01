/* Write a Program to calculate and print factorial of any Number */
// Method-03  -    take nothing return nothing
#include<stdio.h>
void fact();
int main()
{
    fact();
    return 0;
}
void fact()
{
    float m,f = 1;
    printf("\n Enter any Number : ");
    scanf("%f",&m);
    while(m>0)
        f = f * m--;
    printf("\n Factorial is = %f",f);
}
