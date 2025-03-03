/* 5-1/1^2+3/3^2..... 10 terms calculate */

#include<stdio.h>
int main()
{
    float i= -1, t= 0, s= 5, sign= -1, count= 1;
    while (count<10)
    {
        i= i+2;
        t= (i/(i*i))*sign;
        s= s+t;
        sign= sign*(-1);
        count= count+1;
        printf("\n Number is= %f", t);
    }
    printf("\n Sum is = %f", s);
    return 0;
}
