/* Write to the Program calculate and print simple interest.
 Input Principal ammount and duration. Rate of interest 
 depends on Principal.
 If P <= 8000 then R = 10%
 If P > 8000 then R = 15% */
#include<stdio.h>
int main()
{
    float p, t, r, si;
    printf("\n Enter the value of Principal : ");
    scanf("%f", &p);
    printf("\n Enter the value of Time : ");
    scanf("%f", &t);
    if(p<=8000)
        r = 10;
    else
        r = 15;
    si = p * t * r / 100;
    printf("\n Simple Interest  = %f", si);
    return 0;
}
