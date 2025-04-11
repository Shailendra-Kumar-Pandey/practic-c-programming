/* create an area of size 10 load it with any number  print array as will as biggest of array */
#include<stdio.h>
int main()
{
    int a[10],i,n,big=0;
    for ( i = 0; i <= 9; i++)
    {
        printf("\n Enter the Number :");
        scanf("%d",&n);
        a[i] = n;
        if (n>big)
            big = n;
        else
            big = big;
    }
    printf("\n\n this Array\n");
    for ( i = 0; i <= 9; i++)
        printf(" %d ",a[i]);
    printf("\n\n Biggest Number in Array = %d ",big);
    return 0;
}
