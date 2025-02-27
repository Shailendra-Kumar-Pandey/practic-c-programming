/* To Generate and Print even Number 1st to 20 number*/

#include<stdio.h>
int main()
{       /* 2, 4, 6, 8, 10, 12, 14, 16, 18, 20; CD= 2; i= i +2; i+2=2, i = 2-2; i=0; */
    int i = 0;          /* i+2=2, i = 2-2; i=0; */
    while (i<20)
    {
        i = i + 2;      /* CD= 2; i= i +2; */
        printf("\n Even Number is = %d", i);
    }
    return 0;
}
