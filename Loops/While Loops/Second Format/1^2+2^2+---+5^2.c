/* 1^2+2^2+3^2+4^2+5^2 sum calculate */

#include<stdio.h>
int main()
{                    /* CD = 1, i= i+1; i+1=1, i=1-1, i=0; t=0, t=i*i; s=0, s+t; */
    int i= 0, t= 0, s= 0;
    while (i<5)
    {
        i= i+1;
        t= i*i;
        s= s+t;
    }
    printf("\n Sum is =%d",s);
    return 0;
}