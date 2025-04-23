/* write a program to print and store an array size 10 and find and print biggest out of 10 */
#include<stdio.h>
void big(int *);
int main()
{
    int a[10],i;
    for ( i = 0; i <=9; i++)
    {
        printf("\nEnter the number:");
        scanf("%d",&a[i]);
    }
    big(a);
    return 0;
}
void big(int *b)
{
    int i,big=0;
    for ( i = 0; i <=9; i++)
    {
        printf(" %d ",*(b+i));
        if(*(b+i)>big)
            big = *(b+i);
    }
        printf("\nBiggest Number is=%d",big);
}
