/*Method 01-Structure,Pointer and Function */
void main()
{
    struct book
    {
        char name[25];
        char author[25];
        int pages;
    };
    struct book b1 = {"Learning C","SVP",750};
    struct book *ptr;
    ptr = &b1;
    printf("\n%s  %s  %d",b1.name,b1.author,b1.pages);
    printf("\n%s  %s  %d",ptr->name,ptr->author,ptr->pages);        // (->) this is a arrow Operator using Pointer
}
