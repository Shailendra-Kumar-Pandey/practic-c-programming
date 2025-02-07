#include<stdio.h>
int main()
{
    float principal, rate, time, si;
    printf("\n Enter the value of Principal : ");
    scanf("%f",&principal);
    printf("\n Enter the value of Rate : ");
    scanf("%f",&rate);
    printf("\n Enter the value of Time : ");
    scanf("%f",&time);
    si = principal * rate * time / 100;
    printf("\n Simple Interast = %f",si);
    return 0;
}