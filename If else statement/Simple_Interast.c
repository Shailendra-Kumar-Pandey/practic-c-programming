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
