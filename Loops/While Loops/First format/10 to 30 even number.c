/* to Generate and print even number 10 to 30 */

#include<stdio.h>
int main()
{      /* 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30;  CD=2; i= i +2; i+2=10, i= 10-2, i=8;*/
    int i = 8 ;         /* i+2=10, i= 10-2, i=8 */
    while (i<30)
    {
        i = i +2;       /* CD= 2; i= i+2; */
        printf("\n Even Number is = %d", i);
    }
    return 0;         
}