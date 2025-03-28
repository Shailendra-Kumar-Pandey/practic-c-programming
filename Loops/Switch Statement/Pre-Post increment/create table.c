/* Write a Program to print table of given no in a format slown below
3 * 12 = 36
3 * 11 = 33
    --
    --
    --
3 * 1 = 3 */

#include<stdio.h>
int main()
{
    int a, i = 12, m=0;
    printf("\n Enter the Number :");
    scanf("%d",&a);
    while (i>0)
    {
        m = a * i;
        printf("\n %d * %d = %d",a,i,m);
        i--;
    }
    return 0;
}
