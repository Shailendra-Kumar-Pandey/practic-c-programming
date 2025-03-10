/* write a program calculate and print N Numbers Factorial */

#include<stdio.h>
int main()
{
    int j=0, m, n;
    float i, f;
    printf("\n How many Number Find of Factorial : ");
    scanf("%d",&n);
    while (j<n)
    {
       i=0, f=1;
       printf("\n Enter the Number : ");
       scanf("%d",&m);
       while (i<m)
       {
            i= i+1;
            f = f*i;
       }
       printf("\n Factorial is = %f",f);
       j = j+1;       
    }
    return 0;
}