/* To generate and print sum of odd number up to 15 */

#include<stdio.h>
int main()
{               /* 1, 3, 5, 7, 9, 11, 13, 15;  CD=2; i= i+2; i+2=1, i=1-2, i=-1; s=0, s= s+i */
    int i= -1, s= 0;        /* i+2=1, i=1-2, i=-1; s=0 */
    while (i<15)
    {
        i = i + 2;      /* CD=2; i= i+2 */
        s = s + i;      /* s=0, s= s+i */
        printf("\n Odd Number is =  %d", i);
    }
    printf("\n Sum is = %d", s);
    return 0;
}
