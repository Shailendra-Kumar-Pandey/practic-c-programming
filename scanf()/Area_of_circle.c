#include<stdio.h>
int main()
{
    float radius, area;
    printf("\n Enter the Radius of Circle :");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    printf("\n Area of Circle = %f", area);
    return 0;
}