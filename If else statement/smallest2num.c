#include<stdio.h>
int main()
{
    int a, b;
    printf("\n Enter the 2 Number :");
    scanf("%d %d",&a,&b);
    if(a<b)
        printf("\n Smallest number is = %d",a);
    else
        printf("\n Smallest number is = %d",b);
    return 0;    
}