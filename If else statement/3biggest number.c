#include<stdio.h>
int main()
{
    int x, y, z;
    printf("\n Enter the value of X :");
    scanf("%d",&x);
    printf("\n Enter the value of Y :");
    scanf("%d",&y);
    printf("\n Enter the value of Z :");
    scanf("%d",&z);
    if(x>y && x>z)
        printf("\n biggest number is =%d",x);
    else if(y>x && y>z)
            printf("\n biggest number is =%d",y);
          else
            printf("\n biggest number is =%d",z);
    return 0;
}
