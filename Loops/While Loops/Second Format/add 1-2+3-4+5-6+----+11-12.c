/* 1/2+3/4+5/6+7/8+.....+11/12 sum calculate */

#include<stdio.h>
int main()
{                    /* CD = 2, i= i+2; i+2=1, i=1-2, i=-1; t=0, t=(i-1)/i; s=0, s+t; */
    float i= 0, t= 0, s= 0;
    while (i<12)
    {
        i= i+2;
        t= (i-1)/i;
        s= s+t;
    }
    printf("\n Sum is =%f",s);
    return 0;
}