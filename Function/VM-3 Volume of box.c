/* Write a program to calculate and print Volume of box */
// Method No.03  -  taking nothing return something
#include<stdio.h>
int volume();
int main()
{
    int v_box;
    v_box = volume();
    printf("\n Volume of box = %d",v_box);
    return 0;
}
int volume()
{
    int l, w, h,volume;
    printf("\n Enter length, height and width :");
    scanf("%d%d%d",&l,&h,&w);
    volume = l * h * w;
    return(volume);
}
