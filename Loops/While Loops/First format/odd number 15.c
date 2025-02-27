/* To Generate and Print odd number 1st to 15 number */

#include<stdio.h>
int main()
{                       /* 1, 3, 5, 7, 9, 11, 13, 15; CD = 2; i= i+2; i+2 = 1; i= 1-2; i= -1; */
    int i = -1;         /* i+2 = 1; i= 1-2; i= -1; */
    while (i<15)
    {                   /* CD = 2; i= i+2; */
        i = i +2;       
        printf("\n Odd Number is = %d",i);
    }
    return 0;    
}