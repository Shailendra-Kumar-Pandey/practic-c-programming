#include<stdio.h>
int main()
{
    float principal, rate, time, simple_interast;
    principal = 10000.0;
    rate = 12.0;
    time = 5.0;
    simple_interast = principal * rate * time / 100;
    printf("\n Simple Interast = %f", simple_interast);
    return 0;
}