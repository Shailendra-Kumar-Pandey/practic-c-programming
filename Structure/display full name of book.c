/* Write a program to store full book name using structure */
#include<stdio.h>
int main()
{
    struct book
    {
        char name[25];
        float price;
        int pages;
    };
    struct book b = {"Spirit of C",290,550};
    printf("\n Name of Book: %s",b.name);
    printf("\n Prices of Book: %f",b.price);
    printf("\n Number of Pages: %d",b.pages);
    return 0;
}
