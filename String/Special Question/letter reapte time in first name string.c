/* Write a program to inputting first name in string and count the letter repeat time print the screen  */
#include<stdio.h>
int main()
{
    char fname[25],b;
    int i, l, c = 0;
    printf("\nEnter your First Name:- ");
    scanf("%s",fname);
    printf("\nEnter the letter:- ");
    scanf(" %c",&b);

    l = strlen(fname);
    for ( i = 0; i < l; i++)
    {
        if (fname[i]==b)
            c++;
    }
    printf("\n Given letter occurring %d times in the string",c);
    return 0;
}
