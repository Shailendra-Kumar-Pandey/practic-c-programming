/* Write a Program to Reads string from the file and display them on screen */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp;
    char s[80];
    fp = fopen("DATA.TXT", "r");
    if(fp == NULL)
    {
        puts("Cannot open File");
        exit(1);
    }
    while(fgets(s,79,fp) != NULL)
    {
        printf("%s",s);
    }
    fclose(fp);
}
