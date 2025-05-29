/* Write a Program to Read records from a file using structure */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp;
    char another = 'Y';
    struct emp
    {
        char name[40];
        int age;
        float bs;
    };
    struct emp e;
    fp = fopen("EMPLOYEE.DAT", "r");
    if(fp == NULL)
    {
        puts("Cannot open File");
        exit(1);
    }
    while(fscanf(fp, "%s %d %f",e.name,&e.age,&e.bs) != EOF)
        printf("\n%s %d %f",e.name,e.age,e.bs);    
    fclose(fp);
}
