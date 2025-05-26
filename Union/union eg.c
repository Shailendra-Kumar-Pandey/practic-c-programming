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

/* Now, let us understand this output in detail 512 is an integer a 2 byte number.
Its binary equivalent will be 0000 0010 0000 0000 . we assume that this binary number
when stored in memory would look as show below


    our                         0000 0010 | 0000 0000
assumption                      high byte   low byte


actually stored                 0000 0000 | 0000 0010      //   {10 = 2} (convert binary to integer)
in the memory                   low byte   high byte                      */
