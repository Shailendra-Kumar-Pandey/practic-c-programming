/* Write a program campare and print Smallest Number out of N Numbers */

#include<stdio.h>
int main()
{
    int i=1, n, m, x, smallest;
    printf("\n How many Number campare : ");
    scanf("%d",&n);
    printf("\n Enter the Number :");
    scanf("%d",&m);
    smallest = m;
    while (i<n)
    {
        i = i+1;
        printf("\n Enter the Number :");
        scanf("%d",&x);
        smallest = x<smallest ? x : smallest;
    }
    printf("\n Smallest Number is = %d",smallest);
    return 0;
}
