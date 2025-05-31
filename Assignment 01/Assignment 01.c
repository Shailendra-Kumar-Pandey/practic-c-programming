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
        if(enterCode == 1)
            addition();
        else
            if(enterCode == 2)
                multiplication();
            else
                if(enterCode == 3)
                    average();
                else
                    if(enterCode == 4)
                        biggest();
                    else
                        if(enterCode == 5)
                            smallest();
                        else
                            if(enterCode<1 || enterCode>6)
                                printf("\n Number is Not Valid, Please Enter Valid Number \n");
    }while(enterCode != 6);
    return 0;
}
addition()
{
    int a, b, c, add;
    printf("\n Enter the 3 Number :- ");
    scanf("%d%d%d",&a,&b,&c);
    add = a + b + c;
    printf("\nAddition = %d \n",add);
}
multiplication()
{
    int a, b, c, multi;
    printf("\n Enter the 3 Number :- ");
    scanf("%d%d%d",&a,&b,&c);
    multi = a * b * c;
    printf("\nMultiplication = %d \n",multi);
}
average()
{
    int a, b, c;
    float avg;
    printf("\n Enter the 3 Number :- ");
    scanf("%d%d%d",&a,&b,&c);
    avg = (a + b + c)/3.0;
    printf("\nAverage = %d \n",avg);
}
biggest()
{
    int a, b, c, big;
    printf("\n Enter the 3 Number :- ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        big = a;
    else
        if(b>c)
            big = b;
        else
            big = c;
    printf("\nBiggest = %d \n",big);
}
smallest()
{
    int a, b, c, small;
    printf("\n Enter the 3 Number :- ");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c)
        small = a;
    else
        if(b<c)
            small = b;
        else
            small = c;
    printf("\nSmallest = %d \n",small);
}
