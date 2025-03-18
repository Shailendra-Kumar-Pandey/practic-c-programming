/* Write a Program to count number of Male and Female employees in a company.
Consider codes as for male employee = 1, for female employee = 2, To stop =3. */

#include<stdio.h>
int main()
{
    int  coman, male=0, female=0, stop=0, total=0;
    do
    {
        printf("\n Please Enter the Employee code Male-1 and Female-2 and Entry Complet Enter 3 : ");
        scanf("%d",&coman);
        if (coman == 1)
        {
             male = male + 1;
        }else{
            if(coman == 2)
            {
                female = female + 1;
            }else if(coman == 3)
                {
                    stop = 3;
                }else{
                    printf("\n this Employee code is Not Valid, Please Valid Number ");
                    }
        }
    }while (stop != 3);
            total = male + female;
    printf("\n Company are male Employees Entry = %d",male);
    printf("\n Company are female Employees Entry = %d",female);
    printf("\n Company are Total Employees Entry = %d",total);
    return 0;
}
