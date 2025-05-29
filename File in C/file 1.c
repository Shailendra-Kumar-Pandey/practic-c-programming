/* Write a Program to Receives string from keyboard and writes them to File */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp;
    char s[80];
    fp = fopen("DATA.TXT", "w");
    if(fp == NULL)
    {
        puts("Cannot open File");
        exit(1);
    }
    printf("\nEnter a few lines of text:\n");
    while(strlen(gets(s))>0)
    {
        fputs(s,fp);
        fputs("\n",fp);
    }
    fclose(fp);
}
