#include<stdio.h>
int main()
{
    float a, b, c, avg;
    printf("\n Enter the First Number : ");
    scanf("%f",&a);
    printf("\n Enter the Second Number : ");
    scanf("%f",&b);
    printf("\n Enter the Third Number : ");
    scanf("%f",&c);
    avg = (a + b + c)/3;
    printf("\n AVG = %f", avg);
    return 0;
}