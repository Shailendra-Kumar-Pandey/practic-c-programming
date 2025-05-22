/* Write a program usage of an array of structure  store 5 book data */
#include<stdio.h>
int main()
{
    struct book
    {
        char name;
        float price;
        int pages;
    };
    struct book b[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("\nEnter the Book Name, Price and Pages : ");
        scanf("%c%f%d",&b[i].name,&b[i].price,&b[i].pages);
    }
    for(i=0;i<5;i++)
        printf("\n %c  %f  %c ",b[i].name,b[i].price,b[i].pages);
    return 0;
}
