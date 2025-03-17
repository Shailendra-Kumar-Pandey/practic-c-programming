/* Write a Program to generate and print up to 15 Odd Number */
#include<stdio.h>
int main()
{
    int i = -1;
    do
    {
        i = i + 2;
        printf(" %d  ",i);
    } while (i<15);
    return 0;
}