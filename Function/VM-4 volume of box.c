/* Write a program to calculate and print Volume of box */
// Method No.04  -  taking nothing return nothing
#include<stdio.h>
void volume();
int main()
{
    volume();
    return 0;
}
void volume()
{
    int l, w, h,volume;
    printf("\n Enter length, height and width :");
    scanf("%d%d%d",&l,&h,&w);
    volume = l * h * w;
    printf("\n Volume of box = %d",volume);
}
