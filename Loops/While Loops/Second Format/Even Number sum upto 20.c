/* to generate and print sum of even Number upto 20 */

#include<stdio.h>
int main()
{           /* 2, 4, 6, 8, 10, 12, 14, 16, 18, 20; CD= 2; i=i+2; i+2=2, i= 2-2, i=0 */
    int i = 0, s = 0;       /* CD=2; i= i+2 */
    while (i<20)
    {
        i= i +2;        /* CD=2; i= i+2; */
        s = s + i;      /* s = 0, s= s+i; */
        printf("\n Even number is = %d",i);
    }
    printf("\n Sum is = %d",s);
    return 0;
}
