/* Write a Program to input day number print its day name */
#include<stdio.h>
int main()
{
    int dn;
    printf("\n Enter the Day Number (1-7) :");
    scanf("%d",&dn);
    switch (dn)
    {
    case 1:
        printf("\n Day is Sunday...");
        break;
    case 2:
        printf("\n Day is Monday...");
        break;
    case 3:
        printf("\n Day is Tuesday...");
        break;
    case 4:
        printf("\n Day is Wednesday...");
        break;
    case 5:
        printf("\n Day is Thursday...");
        break;
    case 6:
        printf("\n Day is Friday...");
        break;
    case 7:
        printf("\n Day is Saturday...");
        break;
    default:
        printf("\n Invalid Day Number...");
    }
    return 0;
}
