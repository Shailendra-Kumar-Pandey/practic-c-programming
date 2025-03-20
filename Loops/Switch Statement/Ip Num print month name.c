/* Write a Program to input Month number print its Month name */
#include<stdio.h>
int main()
{
    int mn;
    printf("\n Enter the Month Number (1-12) :");
    scanf("%d",&mn);
    switch (mn)
    {
    case 1:
        printf("\n Month is January...");
        break;
    case 2:
        printf("\n Month is Fabuary...");
        break;
    case 3:
        printf("\n Month is March...");
        break;
    case 4:
        printf("\n Month is Apral...");
        break;
    case 5:
        printf("\n Month is May...");
        break;
    case 6:
        printf("\n Month is June...");
        break;
    case 7:
        printf("\n Month is July...");
        break;
    case 8:
        printf("\n Month is Augest...");
        break;
    case 9:
        printf("\n Month is September...");
        break;
    case 10:
        printf("\n Month is Octuber...");
        break;
    case 11:
        printf("\n Month is Nebember...");
        break;
    case 12:
        printf("\n Month is December...");
        break;
    default:
        printf("\n Invalid Month Number...");
    }
    return 0;
}
