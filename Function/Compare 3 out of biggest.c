/* Write a Program to compare to print Biggest out of 3 */
#include<stdio.h>
int data(int,int);
int main()
{
    int a, b, c, big;
    printf("\n Enter 3 Numbers :");
    scanf("%d%d%d",&a,&b,&c);
    big = data(a,b);
    big = data(c,big);
    printf("\nBiggest Number is = %d",big);
    return 0;
}

int data(int x, int y)
{
    if(x>y)
        return (x);
    else
        return (y);
}

/*
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
    else if(y>z)
            printf("\n biggest number is =%d",y);
          else
            printf("\n biggest number is =%d",z);
    return 0;
}

*/
