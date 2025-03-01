/* 1/2+2/3+3/4+.........+9/10 Sum calculate */

#include<stdio.h>
int main()
{
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
