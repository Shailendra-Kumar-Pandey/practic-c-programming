/*Method-02 Structure,Pointer and function*/
struct book                 //Global Scope
    {
        char name[25];
        char author[25];
        int pages;
    };
void main()
{
    struct book b1 = {"Learning C","SVP",800};
    display(&b1);
}
display(struct book *ptr)
{
    printf("\n%s  %s  %d",ptr->name,ptr->author,ptr->pages);        // (->) this is a arrow Operator using Pointer
}
