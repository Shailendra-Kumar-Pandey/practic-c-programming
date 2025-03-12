/* Write a program to print all the numbers between 11 to 100 which are exactly divisible by 3 */

#include<stdio.h>
int main()
{
    int i =10;
    while (i<100)
    {
        i= i+1;
        if (i%3==0)
            printf(" %d  ",i);        
    }
    return 0;
}