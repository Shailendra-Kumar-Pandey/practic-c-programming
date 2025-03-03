/* 1/2-1/4+1/6-1/8+1/10-1/12+1/14 Calculate sum */

#include<stdio.h>
int main()
{
    int i=0;
    float s= 0,t= 0;
    while (i<14)
    {
        i= i+2;
        if(i%4==0)
            t= (1.0/i)*(-1);
        else
            t = (1.0/i)*(1);
        s= s + t;
        printf("\n number is = %f",t);
    }
    printf("\n Calculate is = %f",s);
    return 0;
}