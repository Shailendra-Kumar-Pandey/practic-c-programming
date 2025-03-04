/* 2!+4!+6!+8! */

#include<stdio.h>
int main()
{       
    int i= 0, t=1,s=0;
    while (i<8)
    {
        i = i+2;
        t = t*i;
        s = s+t;
        printf("\n %d ",i);
    }
    printf("\n\n Factorial is = %d",s);
    return 0;
}
