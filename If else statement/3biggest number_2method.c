#include<stdio.h>
int main()
{
    int x, y, z, jaddu;
    printf("\n Enter the value of X :");
    scanf("%d",&x);
    printf("\n Enter the value of Y :");
    scanf("%d",&y);
    printf("\n Enter the value of Z :");
    scanf("%d",&z);
    if(x > y)
        jaddu = x;
    else
        jaddu = y;
    if(z > jaddu)
        jaddu = z;
    printf("\n Biggest Number is = %d", jaddu);
    return 0;
}
