/* Write a Program to inputting word in string and check weather it is Palindrome word or not */
#include<stdio.h>
int main()
{
    char word[25],b[25];
    int l, n, i;
    printf("\n Enter the any word:- ");
    scanf("%s",word);
    printf("\n Enter the any word:- ");
    scanf("%s",b);
    if(b==word)
        printf("ok");
     else
        printf("not ok");
    l = strlen(word);
   printf("\n %d",l);
    for ( i = l-1; i>=0; i--)
     {
         b[i]=word[i];
         printf("%c",b[i]);
     }
     n = strlen(b);
     printf("%d",n);
     if(b==word)
        printf("ok");
     else
        printf("not ok");
    return 0;
}
