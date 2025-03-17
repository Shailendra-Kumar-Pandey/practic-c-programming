/* Write a Program to calculate and print Volume of 5 boxs */
#include<stdio.h>
int main()
{
    int i =0, l, w, h, volume;
    do
    {
        printf("\n Enter the box lenght, width, height : ");
        scanf("%d%d%d",&l,&w,&h);
        volume = l*w*h;
        printf("\n Volume of Box  = %d",volume);
        i = i+1;
    } while (i<5);
    return 0;
}
