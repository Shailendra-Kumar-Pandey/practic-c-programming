/* Union Example - Write a program To Understand the working Union*/ 
#include<stdio.h>
void main()
{
    union test
    {
        int a;
        char b[2];
    };
    union test x;
    x.a = 512;
    printf("\n x.a = %d",x.a);
    printf("\n x.b[0] = %d",x.b[0]);
    printf("\n x.b[1] = %d",x.b[1]);
}