/* 1!+2!+3!+4!+5! */

#include<stdio.h>
int main()
{       /* CD=1; i=i+1, i+1=1, i=1-1, i=0; t=1, t=t*i; s=0, s= s+t; */
    int i= 0, t=1,s=0;
    while (i<5)
    {
        i = i+1;
        t = t*i;
        s = s+t;
        printf("\n %d ",i);
    }
    printf("\n\n Factorial is = %d",s);
    return 0;
}
