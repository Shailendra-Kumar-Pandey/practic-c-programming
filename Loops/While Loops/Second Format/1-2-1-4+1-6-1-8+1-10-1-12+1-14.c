/* 1/2-1/4+1/6.... 7 terms Calculate sum */

#include<stdio.h>
int main()
{
    float i= 0, s= 0, t= 0, sign= 1, count= 0;
    while (count<7)
    {
        i= i+2;

        s= s + t;
        printf("\n number is = %f",t);
    }
    printf("\n Calculate is = %f",s);
    return 0;
}
