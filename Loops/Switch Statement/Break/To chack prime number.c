/* Write a Program to check whether given Number is Prime Number or Not prime number*/

#include<stdio.h>
int main()
{
    int j=2,i=2, a;
    for (i=2; i>0; i= i+1)
    {
        printf("\n Enter the Number : ");
        scanf("%d",&a);
        for ( j = 2; j < i; j=j+1)
        {
           if (a%j==0)
                break;
            printf("\nThis is Not Prime Number : %d",a);
        }
        printf("\nThis is Prime Number : %d",a);
    }
    return 0;
}
