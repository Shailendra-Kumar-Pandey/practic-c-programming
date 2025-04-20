/* Write a program to input multi word name store the string and count the input letter
find and print how many times are repeat the letter in string */
#include<stdio.h>
int main()
{
    char name[50],b;
    int l, i, c=0;
    puts("Enter the Full name:-");
    gets(name);
    printf("\n Enter the letter:-");
    scanf(" %c",&b);
    l = strlen(name);
    for ( i = 0; i < l; i++)
    {
        if(name[i]==b)
            c++;
    }
    printf("\nGiven letter is occurring %d times in the string",c);
    return 0;
}
