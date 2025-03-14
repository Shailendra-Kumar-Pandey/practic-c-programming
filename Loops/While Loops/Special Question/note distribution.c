/* Write a Program to print how many 100 rupees notes, 50 rupees note, 10 rupees notes and
1 rupees coins should be paid in order to pay a given ammount */
#include<stdio.h>
int main()
{
    int g, h, f, t, c;
    printf("\n Enter the Ammount : ");
    scanf("%d",&g);
    h = g/100;
    f = (g-(h*100))/50;
    t = (g-(h*100+f*50))/10;
    c = (g-(h*100+f*50+t*10));
    printf("\n pay 100 rupees Notes = %d ",h);
    printf("\n pay 50 rupees Notes = %d ",f);
    printf("\n pay 10 rupees Notes = %d ",t);
    printf("\n pay 1 rupees Coins = %d ",c);
    return 0;
}
