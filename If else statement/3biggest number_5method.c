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
    x = (a>b ? (a>c ? a : c) : (b > c ? b : c));
    printf("\n Biggest Number is = %d", x);
    return 0;
}
