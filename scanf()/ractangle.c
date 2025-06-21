#include<stdio.h>
int main()
{
    float lenght, width, area, perimeter;
    printf("\n Enter the value of Lenght :");
    scanf("%f",&lenght);
    printf("\n Enter the value of width :");
    scanf("%f",&width);
    area = lenght * width;
    perimeter = 2 * (lenght + width);
    printf("\n Area of Ractangle : = %f",area);
    printf("\n Perimeter of Ractangle : = %f",perimeter);
    return 0;
}
