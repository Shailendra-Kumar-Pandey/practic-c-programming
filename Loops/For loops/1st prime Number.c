/* Write a Program to generate and print Prime Number 1st up to 100 */
#include<stdio.h>
int main()
{   /* 2, 3, 5, 7, 11, 13, 17, 19, 23, 27,  */
    int i, n, a=2, b=3, c=5, d=7;
    printf("\n How many number prime Number find :");
    scanf("%d",&n);
    printf(" %d, %d, %d, %d",a,b,c,d);
    for ( i = 2; i < n; i=i+1)
    {
        if (i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0)
            printf(", %d",i);
    }
    return 0;
}
