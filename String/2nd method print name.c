/* write a program to create an array to finally print to name */
#include<stdio.h>
int main()
{
    char a[] = {'S','H','A','I','L','E','N','D','R','A','\0'};
    int i = 0;
    printf("\nHello! ");
    while (a[i] != '\0')
    {
        printf("%c",a[i]);
        i = i+1;
    }
    return 0;
}