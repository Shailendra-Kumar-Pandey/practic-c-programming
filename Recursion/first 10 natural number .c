/* Write a program to print first 10 natural Number. (Using recursion) */
#include<stdio.h>
void natural(int);
void main()
{
    int n = 1;
    natural(n);
}
void natural(int x)
{
    printf("  %d  ",x);
    if(x == 10)
        return;
    else
        natural(x+1);
}