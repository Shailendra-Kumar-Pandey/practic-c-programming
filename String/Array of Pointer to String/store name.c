/* Write a program to create an array store student name and print name. */
#include<stdio.h>
int main()
{
    char *name[] = {"akash","jeetu","shailendra","pandey","dada","pandey"};
    int i;
    for ( i = 0; i <6; i++)
    {
        printf("%s\n",name[i]);
    }
    return 0;
}
