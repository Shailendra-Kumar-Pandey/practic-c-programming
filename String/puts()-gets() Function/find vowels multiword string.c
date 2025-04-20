/* Write a Program to input any multi-word string and count number of words in it */
#include<stdio.h>
int main()
{
    char words[1000];
    char vowels[]="aeiou";
    int l,j, i,f, c = 0;
    puts("Enter the any words");
    gets(words);
    l = strlen(words);
    f = strlen(vowels);
    for ( i = 0; i < l; i++)
    {
        for(j=0; j< f;j++)
        {
            if(words[i]==vowels[j])
                c++;
        }
    }
    printf("\n This String %d Vowels ",c);
    return 0;
}

/*
#include<stdio.h>
int main()
{
    char words[1000];
    int l, i, c = 0;
    puts("Enter the any words");
    gets(words);
    l = strlen(words);
    for ( i = 0; i < l; i++)
    {
            if(words[i]== 'a' || words[i]== 'e' || words[i]== 'i' || words[i]== 'o' || words[i]== 'u')
                c++;
    }
    printf("\n  %d Vowels ",c);
    return 0;
}                               */
