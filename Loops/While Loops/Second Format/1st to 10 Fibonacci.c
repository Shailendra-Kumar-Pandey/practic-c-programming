/* To Generate and Print 1st 10 Fibonacci Number 0, 1, 1, 2, 3, 5, 8...... */

#include<stdio.h>
int main()
{       /* first_number =0, second_number=1, t =0, t= f+s; f=s; s=t; c=2; c=c+1; */
    int first_number=0 , second_number= 1, t=0, c=2;
    printf("\n Fibonacci Number is = %d",first_number);
    printf("\n Fibonacci Number is = %d",second_number);
    while (c<10)
        {
            t= first_number + second_number;
            printf("\n Fibonacci Number is = %d",t);
            c = c+1;
            first_number = second_number;
            second_number = t;
        }
     return 0;
}
