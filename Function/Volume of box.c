/* Write a program to calculate and print Volume of box */
// Method No.01  -  taking something return something
#include<stdio.h>
int volume(int,int,int);
int main()
{
    int l, w, h, v_box;
    printf("\n Enter length, height and width :");
    scanf("%d%d%d",&l,&h,&w);
    v_box =  volume(l, h ,w);
    printf("\n Volume of box = %d",v_box);
    return 0;
}
int volume(int x, int y, int z)
{
    int volume;
    volume = x * y * z;
    return(volume);   
}
