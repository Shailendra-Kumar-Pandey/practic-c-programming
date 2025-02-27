/* to Generate and Print 1st 10 Natural Number */

#include<stdio.h>
int main()
{           /* 1, 2, 3, 4, 5, 6, 7, 8, 9, 10; CD = 1; i= i+1; i+1=1, i=1-1, i=0 */
    int i = 0;          /* i+1=1, i=1-1, i=0 */
    while (i<10)
    {
        i = i+1;        /* CD = 1; i= i+1; */
        printf("\n Natural Number is = %d",i);
    }
    return 0;
}
