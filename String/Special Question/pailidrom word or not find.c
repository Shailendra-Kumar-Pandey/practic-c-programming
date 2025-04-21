/* Write a Program to inputting word in string and check weather it is Palindrome word or not */
#include<stdio.h>
int main()
{
    char word[25],b[25];
    int l, i, c=0;
    printf("\n Enter the any word:- ");
    scanf("%s",word);
    l = strlen(word);
    for ( i = 0; i < l; i++)
    {
        if(word[i]!= '\0')
           {
                b[l-1] =  word[i];
           }
    }
    if(b[i] == word[i])
        printf("\n This word is Palindrome...");
    else
        printf("\n This word is Not Palindrome...");

    return 0;
}
