/* Write a program to copy structure of one structure to another structure */
#include<stdio.h>
int main()
{
    struct employee
    {
        char name[20];
        int age;
        float salary;
    };
    struct employee e1={"Shailendra Pandey",29,5500.00};
    struct employee e2,e3;

    /* Piece meal copying */
    strcpy(e2.name,e1.name);
    e2.age = e1.age;
    e2.salary = e1.salary;

    /* Copying all elements at one go */
    e3 = e2;
    printf("\n%s %d %f",e1.name,e1.age,e1.salary);
    printf("\n%s %d %f",e2.name,e2.age,e2.salary);
    printf("\n%s %d %f",e3.name,e3.age,e3.salary);
    return 0;
}
