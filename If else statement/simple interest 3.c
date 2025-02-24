/* Write to the Program calculate and print simple interest.
 Input Principal ammount and duration. Rate of interest 
 depends on Principal.
 If P <= 10000 then R = 10%
 If P > 10000 and <= 16000 then R = 12% 
 If P > 16000 and <= 25000 then R = 15% 
 If P > 25000 and <= 35000 then R = 18%
 If p > 35000 then R = 20% */

 #include<stdio.h>
 int main ()
{
    float principal, time, rate, simple_interest;
    printf("\n Enter the value of Principal : ");
    scanf("%f", &principal);
    printf("\n Enter the value of Time & Duration : ");
    scanf("%f", &time);
    if(principal <= 10000)
        rate = 10;
    else
        if (principal <= 16000)
            rate = 12;
        else
            if(principal <= 25000)
                rate = 15;
            else
                if(principal <= 35000)
                    rate = 18;
                else
                    rate = 20;
    simple_interest = principal * time * rate / 100;
    printf("\n Simple Interest = %f", simple_interest);
    return 0;        
}