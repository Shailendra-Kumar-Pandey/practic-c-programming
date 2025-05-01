/* Write a Program to calculate and print factorial of any Number */
// Method-01  -    take something return something
#include<stdio.h>
float fact(float);
int main()
{
    float f1, m;
    printf("\n Enter any Number : ");
    scanf("%f",&m);
    f1 = fact(m);
    printf("\n Factorial is = %f",f1);
    return 0;
}
float fact(float x)
{
    float f = 1;
    while(x>0)
        f = f * x--;
    return(f);
}
