/* 1st Method:- Write a Program to input 4 Digit Number and print sum of its digits.
 2671 = 16

#include<stdio.h>
int main()
{
    int a , d1, d2, d3, d4, sum;
    printf("\n Enter only Four Digit Number : ");
    scanf("%d",&a);
    d1 = a/1000;
    d2 = (a-(d1*1000))/100;
    d3 = (a-(d1*1000+d2*100))/10;
    d4 = (a-(d1*1000+d2*100+d3*10));
    sum = d1+ d2+ d3+ d4;
    printf("\n %d",sum);
    return 0;
}

 2nd Method:-
#include<stdio.h>
int main()
{

    int i=0, x , d, sum1=0;
    printf("\n Enter only Four Digit Number : ");
    scanf("%d",&x);
    while(i<4)
    {
        d = x%10;
        sum1 = sum1 + d;
        x = x/10;
        i = i +1;
    }
    printf("\n %d",sum1);
    return 0;
}

3rd Method
*/

#include<stdio.h>
int main()
{
    int x , d, sum1=0;
    printf("\n Enter any Digit Number : ");
    scanf("%d",&x);
    while(x>0)
    {
        d = x%10;
        sum1 = sum1 + d;
        x = x/10;
    }
    printf("\n %d",sum1);
    return 0;
}
