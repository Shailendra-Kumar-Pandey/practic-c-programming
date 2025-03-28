/* Write a Program to check whether given Number is Prime Number or Not prime number*/

#include<stdio.h>
int main()
{
    int i=2, a;
    printf("\n Enter the Number :");
    scanf("%d",&a);
    if (a>0 && a<=3)
    {
        printf("\n This is Prime Number...");
    }else{
        while (i<a)
        {
            if(a%i==0)
                break;
            i++;
        }
        if(i==a)
            printf("\n %d is Prime Number...",a);
        else
            printf("\n %d is Not prime Number",a);
    }
    return 0;
}
