/* Write a Program to count number of Male and Female employees in a company.
Consider codes as for male employee = 1, for female employee = 2, To stop =3. */

#include<stdio.h>
int main()
{
    int  coman, male, female, stop, total;
    do
    {
        printf("\n Please Enter the Employee code Male-1 and Female-2 and Entry Complet Enter 3 : ");
        scanf("%d",&coman);
        if (coman == 1)
            male = male + 1;
        else if(coman == 2)
                female = female + 1;
            else if(stop == 3)
                    total = male + female;
                    break;
                else
                    printf("\n this Employee code is Not Valid, Please Valid Number ");
        total = male + female;
    }while (1);
    printf("\n Company are Total Employees Entry = %d",total);
    return 0;
}
