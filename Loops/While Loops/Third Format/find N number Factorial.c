/* Write a Program to Calculate and print Factorial N numbers */
#include<stdio.h>
int main()
{
    float i=0, j=0, t=1, n, m;
    printf("\n How many Numbers of print Factorial : ");
    scanf("%f",&m);
    while (j<m)
    {
        j = j +1;
        printf("\n Enter the Number is Factor :");
        scanf("%f",&n);
        while (i<n)
        {
            i = i+1;
            t = t*i;
        }
        printf("\n Factorial is = %f",t);
        i = 0;
        t = 1;
    }
    return 0;
}
