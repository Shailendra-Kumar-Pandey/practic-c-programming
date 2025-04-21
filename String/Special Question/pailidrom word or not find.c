/* Write a Program to inputting word in string and check weather it is Palindrome word or not */
#include<stdio.h>
int main()
{
    char word[25];
    int l, i, c=0;
    printf("\n Enter the any word:- ");
    scanf("%s",word);
    l = strlen(word);
    printf("\n %d",l);
    for ( i = 0; i < l; i++)
    {
        if(word[i]==word[l-1])
            printf("\n This word is Palindrome...");
        else
            printf("\n This word is Not Palindrome...");
    }
    return 0;
}
