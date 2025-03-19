/* Write a Program to calculate and print area and perimeter 5 rectangles */
#include<stdio.h>
int main()
{
    int i, area, perimeter, length, width;
    for ( i = 0; i < 5; i=i+1)
    {
        printf("\n Enter length and width :");
        scanf("%d%d",&length,&width);
        area = length * width;
        perimeter = 2 * (length + width);
        printf("\n Rectangle of Area = %d",area);
        printf("\n Rectangle of Perimeter = %d",perimeter);
    }
    return 0;
}
