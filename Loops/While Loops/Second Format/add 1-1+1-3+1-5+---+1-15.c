/* 1/1+1/3+1/5+1/7+.....+1/15 sum calculate */

#include<stdio.h>
int main()
{                    /* CD = 2, i= i+2; i+2=1, i=1-2, i=-1; t=0, t=1/i; s=0, s+t; */
    float i= -1, t= 0, s= 0;
    while (i<15)
    {
        i= i+2;
        t= 1/i;
        s= s+t;
    }
    printf("\n Sum is =%f",s);
    return 0;
}