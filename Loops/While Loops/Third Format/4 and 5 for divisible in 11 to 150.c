/* Write a Program to print all the numbers between 11 to 150 which are exactly divisible by 4 and 5 */

#include<stdio.h>
int main()
{
    int i=10;
    while (i<150)
    {
        i = i+1;
        if (i%4==0 && i%5==0)
            printf(" %d  ",i);
    }
    return 0;
}