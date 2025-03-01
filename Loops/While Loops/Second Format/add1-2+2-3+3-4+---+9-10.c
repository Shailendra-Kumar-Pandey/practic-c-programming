/* 1/2+2/3+3/4+.........+9/10 Sum calculate */

#include<stdio.h>
int main()
{       /* CD = 1, i= i+1; i+1=2, i=2-1, i=1; t=0, t=(i-1)/i; s=0, s+t; */
    float i= 1, t=0, s=0;
    while (i<10)
    {
        i = i + 1;
        t = (i-1)/i;
        s = s + t;
    }
    printf("\n Sum is =%f",s);
    return 0;
}
