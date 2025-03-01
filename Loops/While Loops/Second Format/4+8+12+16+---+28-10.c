/* 4+8+12+16+20+24+28-10 calculate */

#include<stdio.h>
int main()
{                    /* CD = 4, i= i+4; i+4=4, i=4-4, i=0; t=0, t=s-10; s=0, s+t; */
    int i= 0, t= 0, s= 0;
    while (i<28)
    {
        i= i+4;
        s= s+t;
    }
    t= s-10;
    printf("\n Sum is =%d",t);
    return 0;
}