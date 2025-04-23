/* Write a Program to inputting word in string and check weather it is Palindrome word or not */
#include<stdio.h>
int main()
{
    char word[25],b[25];
    int l, n, i;
    printf("\n Enter the any word:- ");
    scanf("%s",word);
    l = strlen(word);
    for ( i = l; i>=0; i--)
     {
         b[i]=word[i];
         printf("%c",b[i]);
     }
     if(b==word)
        printf("ok");
     else
        printf("not ok");
    return 0;
}
