#include<stdio.h>
int main()
{
    int a, b, c;
    printf("\n Enter the value of A :");
    scanf("%d",&a);
    printf("\n Enter the value of B :");
    scanf("%d",&b);
    printf("\n Enter the value of C :");
    scanf("%d",&c);
    if(a < b)
        {
            if(a < c)
                printf("\n Smallest Number is = %d",a);
            else
                printf("\n Smallest Number is = %d",c);
        }
    else
        {
            if(b < c)
                printf("\n Smallest Number is = %d", b);
            else
                printf("\n Smallest Number is = %d", c);
        }
    return 0;
}
