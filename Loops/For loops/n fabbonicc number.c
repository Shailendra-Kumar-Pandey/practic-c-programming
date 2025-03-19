/* Write a Program to generate and print 1st to n fibonacci number */
#include<stdio.h>
int main()
{
    int i, n, f=0, s=1,t=0 ;
    printf("\n How many find fibonacci Number :");
    scanf("%d",&n);
    printf("\n %d, %d",f,s);
    for ( i = 2; i < n; i=i+1)
    {
        t = f + s;
        printf(", %d",t);
        f = s;
        s = t;
    }
    return 0;
}
