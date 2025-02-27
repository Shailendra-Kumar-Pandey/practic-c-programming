/* to generate and print given number 1, 5, 9, 13, 17, 21, 25 */

#include<stdio.h>
int main()
{       /* 1, 5, 9, 13, 17, 21, 25;  CD= 4; i = i+4;  i+4 = 1, i= 1-4, i= -3;*/
    int i = i-3;        /* i+4 = 1, i= 1-4, i= -3; */
    while (i<25)
    {
        i = i + 4;      /* CD= 4; i = i+4 */
        printf("\n Given number is = %d",i);
    }
    return 0;
}