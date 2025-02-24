/* Write to the Program calculate and print simple interest.
 Input Principal ammount and duration. Rate of interest 
 depends on Principal.
 If P <= 8000 then R = 10%
 If P > 8000 and <= 15000 then R = 15% 
 If P > 15000 then R = 18% */
 #include<stdio.h>
 int main()
 {
    float principal, time, rate, simple_interest;
    printf("\n Enter the value of Principal : ");
    scanf("%f", &principal);
    printf("\n Enter the value of Time & Duration : ");
    scanf("%f", &time);
    if(principal <= 8000)
        rate = 10;
    else
        if(principal <= 15000)
            rate = 15;
        else
            rate = 18;
    simple_interest = principal * time * rate / 100;
    printf("\n Simple Interest = %f ", simple_interest);
    return 0;
 }