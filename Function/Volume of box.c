/* Write a program to calculate and print Volume of box */
#include<stdio.h>
int xyz(int,int);
int main()
{
    int l, w, h, v_box;
    printf("\n Enter length, height and width :");
    scanf("%d%d%d",&l,&h,&w);
    v_box = l * xyz(h ,w);
    printf("\n Volume of box = %d",v_box);
    return 0;
}
int xyz(int x, int y)
{
    return (x * y);

}
