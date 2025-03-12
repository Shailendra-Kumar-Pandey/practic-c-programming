/* Write a Program to print all the number between 11 to 200
                         which are exactly divisible 3 and not by 7 */

#include<stdio.h>
int main()
{
    int i =10;
    while (i<200)
    {
        i = i+1;
        if(i%3==0 && i%7!=0)
            printf(" %d  ",i);
    }
    return 0;
}
