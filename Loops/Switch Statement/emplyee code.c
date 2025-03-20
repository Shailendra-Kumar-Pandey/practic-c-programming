/* Write a Program to count number of Male and Female employees in a company.
Consider codes as for male employee = 1, for female employee = 2, To stop =3. */
#include<stdio.h>
int  main()
{
    int ec=0, total=0, male=0, female=0;
    do
        {
            printf("\n Enter Employee Code (1-3) :");
            scanf("%d",&ec);
            switch (ec)
            {
            case 1:
                male = male + 1;
                break;
            case 2:
                female = female + 1;
                break;
            default:
                printf("\n Please Enter Valid Employee Code....");
            }
        }while(ec!=3);
    total = male + female;
    printf("\n Males = %d  Females = %d \n Total = %d",male,female,total);
    return 0;
}
