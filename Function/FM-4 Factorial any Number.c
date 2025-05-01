/* Write a Program to calculate and print factorial of any Number */
// Method-04  -    take nothing return something
#include<stdio.h>
int fact();
int main()
{
    float f1;
    f1 = fact();
    printf("\n Factorial is = %f",f1);
    return 0;
}
int fact()
{
    float m,f = 1;
    printf("\n Enter any Number : ");
    scanf("%f",&m);
    while(m>0)
        f = f * m--;
    return(f);
}
