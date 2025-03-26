/* Write a Program to add 10 odd Number from inputed Number */
#include<stdio.h>
int main()
{
    int i=0, s=0,a;
    while (i<10)
    {
        printf("\n Enter the Number :- ");
        scanf("%d",&a);
        if(a%2==0)
            continue;
        s = s + a;
        i = i + 1;
    }
    printf("\n Sum = %d",s);
    return 0;
}
