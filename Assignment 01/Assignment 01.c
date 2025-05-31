/* Write a Program to following details

                        MENU
    1) Addition of 3 Numbers
    2) Multiplication of 3 Numbers
    3) Average of 3 Numbers
    4) Biggest out of 3 Numbers
    5) Smallest out of 3 Numbers
    6) Stop

    Enter your choice (1-6):-
*/
#include<stdio.h>
int main()
{
    int enterCode = 0;
    do{
        printf("\n  \t   MENU\n 1) Addition of 3 Numbers\n 2) Multiplication of 3 Numbers\n 3) Average of 3 Numbers\n 4) Biggest out of 3 Numbers\n 5) Smallest out of 3 Numbers\n 6) Stop\n \nEnter your choice (1-6):- ");
        scanf("%d",&enterCode);
    }while(enterCode != 6);
    return 0;
}
