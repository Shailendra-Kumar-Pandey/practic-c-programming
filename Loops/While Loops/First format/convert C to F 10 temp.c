/* To calculate and print convert 10 temprature Degree Celsius to Fahrenheit */

#include<stdio.h>
int main()
{
    int i = 0;
    float celsius, fahrenheit;
    while (i<10)
    {
        printf("\n Enter the temp. in Celsius : ");
        scanf("%f",&celsius);
        fahrenheit = (celsius * 9/5) + 32;
        printf("\n Temp. in Fahrenheit is = %f ", fahrenheit);
        i = i + 1;
    }
     return 0;
}