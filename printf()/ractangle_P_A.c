#include<stdio.h>
int main()
{
    float lenght, width, area, perimeter;
    lenght = 105.0;
    width = 55.0;
    area = lenght * width;
    perimeter = 2 * (lenght + width);
    printf("\n Area of Rectangle = %f", area);
    printf("\n Perimeter of Rectangle = %f", perimeter);
    return 0;
}
