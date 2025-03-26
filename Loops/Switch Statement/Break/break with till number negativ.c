/* Write a Program to add till Number Enter Negativ Number then Stop Program */
#include<stdio.h>
int main()
{
    int s=0,a;
    while (1)
    {
        printf("\n Enter the Number :");
        scanf("%d",&a);
        if (a<0)
            break;
        s = s + a;
    }
    printf("\n Sum = %d",s);
    return 0 ;
}
