/* Write a program to print first 10 natural Number. (Using recursion) */
#include<stdio.h>
void natural(int);
void main()
{
    int n = 10;
    natural(n);
}
void natural(int x)
{
    if(x>0)
    {
        natural(x-1);
        printf("  %d  ",x);
    }
}