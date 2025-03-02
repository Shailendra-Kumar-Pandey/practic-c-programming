/* 1/2-1/4+1/6-1/8+1/10-1/12+1/14 Calculate sum */

#include<stdio.h>
int main()
{
    float i= 0, s= 0,t= 0;
    while (i<14)
    {
        i= i+2;
        t= 1/i;
        s= s + t;
        printf("\n number is = %f",t);
    }
    printf("\n Calculate is = %f",s);
    return 0;
}