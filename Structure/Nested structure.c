/* Nesting of Structure*/
void main ()
{
    struct address
    {
        char phone[25];
        char city [25];
        int pin;
    };
    struct employee 
    {
        char name[25];
        struct address a;
    };
    struct employee e={"Jeetu Pandey","9806638963","Satna",485001};
    printf("\nName = %s  Phone = %s",e.name,e.a.phone);
    printf("\nCity = %s  Pin = %d",e.a.city,e.a.pin);
}