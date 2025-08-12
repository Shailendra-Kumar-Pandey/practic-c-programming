/* To clculate and print Area and Perimeter 6 Ractagle */

#include<stdio.h>
int main()
{
    int i = 0;
    float lenght, width, area, perimeter;
    while (i<6)
    {
        printf("\n Enter the value of Lenght and Width : ");
        scanf("%f %f", &lenght, &width);
        area = lenght * width;
        perimeter = 2 * (lenght + width);
        printf("\n Area of Ractagle = %f", area);
        printf("\n Perimeter of Ractagle = %f", perimeter);
        i = i + 1;
    }
    return 0;    
}
