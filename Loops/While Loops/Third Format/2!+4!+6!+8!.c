/* 2!+4!+6!+8! */

#include<stdio.h>
int main()
{       /* CD=2; i=i+2, i+2=2, i=2-2, i=0; t=1, t=t*i*(i-1); */
    int i= 0, t=1,s=0;
    while (i<8)
    {
        i = i+2;
        t = t*i*(i-1);
        s = s+t;
        printf("\n %d %d %d ",i,t,s);
    }
    printf("\n\n Factorial is = %d",s);
    return 0;
}
