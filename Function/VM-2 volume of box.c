/* Write a program to calculate and print Volume of box */
// Method No.02  -  taking something return nothing
#include<stdio.h>
int volume(int,int,int);
int main()
{
    int l, w, h;
    printf("\n Enter length, height and width :");
    scanf("%d%d%d",&l,&h,&w);
    volume(l, h ,w);
    return 0;
}
int volume(int x, int y, int z)
{
    int volume;
    volume = x * y * z;
    printf("\n Volume of box = %d",volume);
}
