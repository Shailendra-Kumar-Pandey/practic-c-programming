/* Write a program using Structure */
#include<stdio.h>
int main()
{
    struct book
    {
        char name;
        float price;
        int pages;
    };
    struct book b = {'z',280.00,490};
    printf("\n Name of Book: %c",b.name);
    printf("\n Name of Book: %f",b.price);
    printf("\n Name of Book: %d",b.pages);
    return 0;
}
