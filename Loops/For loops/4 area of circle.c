/* Write a Program to calculate and print area of 4 Circle */
#include<stdio.h>
int main()
{
    int i;
    float radius, area;
    for ( i = 0; i < 4; i++)
    {
        printf("\n Enter the Radius : ");
        scanf("%f",&radius);
        area = 3.14 * radius * radius;
        printf("\n Circle of Area = %f", area);
    }
    return 0;
}