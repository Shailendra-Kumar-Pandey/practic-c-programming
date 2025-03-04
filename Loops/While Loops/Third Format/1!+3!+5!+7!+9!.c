/* 1!+3!+5!+7!+9! */

#include<stdio.h>
int main()
{       
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
