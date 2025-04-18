/* write a program to create an array to finally print to name */
#include<stdio.h>
int main()
{
    char a[] = "SHAILENDRA";
    int i = 0;
    printf("\nHello! ");
    while (a[i] != '\0')
    {
        printf("%c",a[i]);
        i = i+1;
    }
    return 0;
}