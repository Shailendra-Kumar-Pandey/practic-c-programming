/* Write a program to print fibonacci serises (Using Recursion) */
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
    if(x>0)
        return;
    else
        t = y+z;
        y = z;
        z = t;
        fabb(x-1,y,z);
    printf("  %d ",t);
}
