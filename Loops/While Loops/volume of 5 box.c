/* To clculate and print Volume of 5 box */

#include<stdio.h>
int main()
{
    int i = 0;
    float lenght, width, height, volume_box;
    while (i<6)
    {
        printf("\n Enter the value of Lenght, Width and height : ");
        scanf("%f %f %f", &lenght, &width, &height);
        volume_box = lenght * width * height;
        printf("\n Volume of Box = %f", volume_box);
        i = i + 1;
    }
    return 0; 
}