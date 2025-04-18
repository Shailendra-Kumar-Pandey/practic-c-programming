/* write a program to create an array and inputting name to finally print to name */
#include<stdio.h>
int main()
{
    char a[25];
    int i = 0;
    printf("\n Enter Your Name :");
    scanf("%s",a);              // a = &a[0];
    printf("\nHello! ");
    while (a[i] != '\0')
    {
        printf("%c",a[i]);
        i = i+1;
    }
    return 0;
}