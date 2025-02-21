#include<stdio.h>
int main()
{
    int a, b, c, x;
    printf("\n Enter the value of A :");
    scanf("%d",&a);
    printf("\n Enter the value of B :");
    scanf("%d",&b);
    printf("\n Enter the value of C :");
    scanf("%d",&c);
    if(a < b)
        x = a;
    else
        x = b;
    if(c < x)
        x = c;
    printf("\n Smallest Number is = %d",x);
    return 0;
}
