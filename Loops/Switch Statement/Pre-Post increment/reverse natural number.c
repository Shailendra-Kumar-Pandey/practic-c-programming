/* Write a Program to generate and print first 10 Natural Number in reverse order */
#include<stdio.h>
int main()
{
    int i=11;  /* CD=1 i=i-1 i=10+1 , i=11 */
    while (i>1)
    {
        --i;
        printf("  %d  ",i);
    }
    return 0;
}
