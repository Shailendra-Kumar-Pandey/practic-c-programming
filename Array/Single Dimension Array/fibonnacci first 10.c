/* create an area of size 10 to generate and print first 10 Fibonacci Number */
#include<stdio.h>
int main()
{
    int a[10],i,f=0,s=1,t=0;
    for ( i = 0; i <= 9; i++)
    {
        if(i==0)
            a[i]= f;
        if(i==1)
            a[i]= s;
         t = f + s;
        if(i>1 && i<=9)
        {
            a[i] = t;
            f = s;
            s = t;
        }
    }
    for ( i = 0; i <= 9; i++)
        printf(" %d ",a[i]);
    return 0;
}
