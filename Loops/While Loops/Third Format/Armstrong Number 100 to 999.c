/* Write a Program to print all  Armstrong Number between 100 to 999. */
#include<stdio.h>
int main()
{
    int i = 100,a, j, d, sum, cube;
    while (i<999)
    {
        i = i+1;
        a = i;
        j = 0;
        sum = 0;
            while (j<3)
            {
                d = a%10;     //
                cube = d*d*d;
                sum = sum + cube;
                a = a/10;
                j = j+1;
            }
        if(i == sum)
            printf(" %d  ",sum);
    }
    return 0;
}
