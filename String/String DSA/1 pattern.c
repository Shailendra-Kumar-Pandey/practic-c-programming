/* write a program input your name and print format bellow-
Eg:- JEETU
     J
     JE
     JEE
     JEET
     JEETU
*/
#include<stdio.h>
int main()
{
    char fname[30];
    int i,j,l;
    printf("\nEnter the First Name :-");
    scanf("%s",fname);
    l = strlen(fname);
    for ( i = 0; i < l; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            printf("%c",fname[j]);
        }
        printf("\n");
    }
    return 0;
}
