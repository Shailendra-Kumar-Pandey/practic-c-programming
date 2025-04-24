/* Write a Program to inputting word in string and check weather it is Palindrome word or not */
#include<stdio.h>
int main()
{
    char a[10],b[10];
    int i, l, j=0,chack=1;
    printf("\nEnter the Name:- ");
    scanf("%s",a);
    l = strlen(a);
    for ( i = l-1; i >=0 ; i--)
    {
        b[j] = a[i];
        j=j+1;
    }
    b[j] = "\0";
    for(i = 0; i<l; i++)
    {
        if (b[i]!=a[i])
        {
            chack = 0;
        }
    }
    if (chack == 1)
        printf("\nthis is Palindrome word");
    else
        printf("\n this is NOT Palindrome Word");
    return 0;
}
