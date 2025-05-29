/* Write a Program to records to a file using structure */
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
    fp = fopen("EMPLOYEE.DAT", "w");
    if(fp == NULL)
    {
        puts("Cannot open File");
        exit(1);
    }
    while(another == 'Y')
    {
        printf("\n Enter Name, Age and Basic Salary: ");
        scanf("%s %d %f",e.name,&e.age,&e.bs);
        fprintf(fp, "%s %d %f",e.name,e.age,e.bs);
        printf("Add another record (Y/N)");
        fflush(stdin );
        another = getche();
    }
    fclose(fp);
}
