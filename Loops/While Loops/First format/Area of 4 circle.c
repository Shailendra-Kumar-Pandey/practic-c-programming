/* Write a program in c to calculate and print area of 4 circle. */

#include<stdio.h>
int main ()
{
    int i = 0;
    float radius, area;
    while (i<4)
    {
        printf("\n Enter the Value of Radius : ");
        scanf("%f", &radius);
        area = 3.14 * radius * radius;
        printf("\n Circle of Area = %f", area);
        i = i + 1;
    }
    return 0;
}