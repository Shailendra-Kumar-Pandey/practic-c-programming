/* Write a program to find Biggest out of 7 */
#include<stdio.h>
int main()
{
    int i = 1, big, next;
    printf("\n Enter 1st number : ");
    scanf("%d",&big);
    do
    {
        printf("\n Enter next number : ");
        scanf("%d",&next);
        if (next > big)
            big = next;
        i = i + 1;
    } while (i<7);
    printf("\n Biggest Number is =%d",big);
    return 0;
}