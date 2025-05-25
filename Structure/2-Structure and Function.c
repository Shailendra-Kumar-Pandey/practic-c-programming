/* Method- 02 Structure and Function*/
struct book                 //Global Scope
    {
        char name[25];
        char author[25];
        int pages;
    };
void main()
{
    struct book b1 = {"Learning C","SVP",800};
    display(b1);
}
display(struct book b)
{
    printf("\n%s  %s  %d",b.name,b.author,b.pages);
}
