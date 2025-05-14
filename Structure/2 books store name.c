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
    struct book b1 = {"Spirit of C",290,550}, b2 = {"Spirit of C++",180,250};
    printf("\n Name of Book: %s",b1.name);
    printf("\n Prices of Book: %f",b1.price);
    printf("\n Number of Pages: %d",b1.pages);
     printf("\n Name of Book: %s",b2.name);
    printf("\n Prices of Book: %f",b2.price);
    printf("\n Number of Pages: %d",b2.pages);
    return 0;
}
