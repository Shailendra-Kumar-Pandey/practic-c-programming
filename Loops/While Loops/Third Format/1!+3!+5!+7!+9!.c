/* 1!+3!+5!+7!+9! */

#include<stdio.h>
int main()
{       /* CD=2; i=i+2, i+2=1, i=1-2, i=-1; t=1, t=t*i; */
    int i= -1, t=1,s=0;
    while (i<9)
    {
        i = i+2;
        t = t*i;
        s = s+t;
        printf("\n %d ",i);
    }
    printf("\n\n Factorial is = %d",s);
    return 0;
}
