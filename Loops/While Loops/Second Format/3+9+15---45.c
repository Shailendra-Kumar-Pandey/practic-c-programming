/* To calculate and print sum and print Number 3+9+15+21+27+33+39+45  */

#include<stdio.h>
int main()
{       /* 3, 9, 15, 21, 27, 33, 39, 45;  CD= 6, i = i+6;  i+6= 3, i= 3-6, i = -3; */
    int i =-3, s=0;     /* i+6= 3, i= 3-6, i = -3; s=0, s= s+i;*/
    while (i<45)
    {
        i = i +6;       /* CD= 6, i = i+6 */
        s = s + i;      /* s= 0, s = s+i */
        printf("\n Number is = %d", i);
    }
    printf("\n Sum is = %d", s);
    return 0;
}