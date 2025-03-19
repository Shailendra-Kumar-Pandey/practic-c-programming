/* Write a program to compare and print biggest out of n */
#include<stdio.h>
int main()
{
    int i, n, big, next;
    printf("\n how many number compare out of Biggest Number  : ");
    scanf("%d",&n);
    printf("\n Enter 1st Number  : ");
    scanf("%d",&big);
    for ( i = 1; i < n; i=i+1)
    {
        printf("\n Enter Next Number :");
        scanf("%d",&next);
        if(next>big)
            big = next;
    }
    printf("\n Biggest Number is = %d",big);
    return 0;
}
