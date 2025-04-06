/* Write a Program using Pointer Program */
#include<stdio.h>
int main()
{
    int i, *j;
    i = 3;
    j = &i;
    printf("\nAddress of i = %u", &i);
    printf("\nAddress of i = %u",j);
    printf("\nAddress of i = %u",&j);
    printf("\nValue in i = %d",i);
    printf("\nValue in i = %d",*(&i));
    printf("\nValue in i = %d",*j);
    return 0;
}
