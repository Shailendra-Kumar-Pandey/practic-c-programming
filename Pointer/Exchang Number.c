/* write a program to exchange of two Variable */
#include<stdio.h>
void exchange(int *,int *);
int main()
{
    int a,b;
    printf("\nEnter 2 Numbers : ");
    scanf("%d %d",&a,&b);
    exchange(&a,&b);
    printf("\n After exchange a = %d , b= %d",a,b);
    return 0;
}

void exchange (int *x, int *y)
{
    int z;
    z = *x;
    *x = *y;
    *y = z;
}