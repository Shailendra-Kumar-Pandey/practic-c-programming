/* Write a Program to calculate and print factorial of any Number */
// Method-02  -    take something return nothing
#include<stdio.h>
void fact(float);
int main()
{
    float m;
    printf("\n Enter any Number : ");
    scanf("%f",&m);
    fact(m);
    return 0;
}
void fact(float x)
{
    float f = 1;
    while(x>0)
        f = f * x--;
    printf("\n Factorial is = %f",f);
}
