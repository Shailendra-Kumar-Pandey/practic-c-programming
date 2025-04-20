/* Write a Program to input any multi-word string and count number of words in it */
#include<stdio.h>
int main()
{
    char words[1000];
    int l, i, c = 1;
    puts("Enter the any words");
    gets(words);
    l = strlen(words);
    for ( i = 0; i < l; i++)
    {
        if (words[i]==' ')
            c=c+1;
    }
    printf("\n Total %d word Used ",c);
    return 0;
}
