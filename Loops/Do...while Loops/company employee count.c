/* Write a Program to count number of Male and Female employees in a company.
Consider codes as for male employee = 1, for female employee = 2, To stop =3. */

#include<stdio.h>
int main()
{
    int  entry=0, male=0, female=0, total=0;
    do
    {
        printf("\n Please Enter the Employee code Male-1 and Female-2 and Entry Complet Enter 3 : ");
        scanf("%d",&entry);
        if (entry == 1)
             male = male + 1;
        else
            if(entry == 2)
                female = female + 1;
            else
                if(entry<1 || entry>3)
                    printf("\n this Employee code is Not Valid, Please Valid Number ");
    }while(entry != 3);
            total = male + female;
    printf("\n males = %d  females = %d \n Total Employees = %d ", male, female, total);
    return 0;
}
