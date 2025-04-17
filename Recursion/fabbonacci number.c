/* Write a program to print Fibonacci series (Using Recursion) */
#include<stdio.h>
void fabb(int,int,int);
int main()
{
    int f = 0, s = 1, c = 10;
    printf("\n %d  %d",f,s);
    fabb(c,f,s);
    return 0;
}
void fabb(int x, int y, int z)
{   int t ;
    if(x==2)
        return;
    else
    {
        t = y+z;
        printf("  %d ",t);
        fabb(x-1,z,t);
    }
}
