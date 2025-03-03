/* 1+11+111+1111+11111 calculate Sum */

#include<stdio.h>
int main()
{       /* i=0; i=i*10+1; s=0, s= s+i */
    int i=0, s=0;
    while (i<11111)
    {
        i= i*10+1;
        s= s+i;
        printf("\n Number is = %d",i);
    }
    printf("\n sum is =%d",s);
    return 0;
}