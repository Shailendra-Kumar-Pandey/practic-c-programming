/* 1/2-1/4+1/6.... 7 terms Calculate sum */

#include<stdio.h>
int main()
{
    float i= 0, sum= 0, t= 0, sign= 1, count= 0;
    while (count<7)
    {       /* CD= 2, i=i+2; i+2=2, i=2-2, i=0; t= (1/i)*sign, s=0, s=s+t; count=0, count= count+1; */
        i= i+2;
        t= (1/i)*sign;
        sum= sum + t;
        sign = sign * (-1);
        count = count + 1;
        printf("\n number is = %f",t);
    }
    printf("\n Calculate is = %f",sum);
    return 0;
}
