#include<stdio.h>
int main()
{
    float lenght, width, height, volume;
    printf("\n Enter the Box's Lenght :");
    scanf("%f",&lenght);
    printf("\n Enter the Box's Width :");
    scanf("%f",&width);
    printf("\n Enter the Box's Height :");
    scanf("%f",&height);
    volume = lenght * width * height;
    printf("\n Volume of Box = %f", volume);
    return 0; 
}