/* Write a program to calculate and print Volume of box */
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
    if(x>y && x>z)
        return (x);
    else
        if(y>z)
            return (y);
        else
            return (z);
}
