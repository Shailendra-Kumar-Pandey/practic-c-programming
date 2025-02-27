/* To clculate and print Simple Interest 7 custmar */

#include<stdio.h>
int main()
{
    int i = 0;
    float principal, time, rate, simple_interest;
    while (i<7)
    {
        printf("\n Enter the value of Principal, Time and Rate : ");
        scanf("%f %f %f", &principal, &time, &rate);
        simple_interest = principal * time * rate / 100;
        printf("\n Simple Interest = %f", simple_interest);
        i = i + 1;
    }
    return 0;    
}