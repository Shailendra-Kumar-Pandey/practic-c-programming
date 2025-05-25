/* Method- 01 Structure and Function*/
void main()
{
    struct book
    {
        char name[25];
        char author[25];
        int pages;
    };
    struct book b1 = {"Learning C","SVP",750};
    display(b1.name,b1.author,b1.pages);
}
 display(char *s,char *t, int n)
{
    printf("\n%s  %s  %d",s,t,n);
}
