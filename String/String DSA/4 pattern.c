/* write a program input your name and print format bellow-
Eg:- JEETU
     JEETU
     JEET
     JEE
     JE
     J
*/
#include<stdio.h>
int main()
{
    char fname[30];
    int i,j,l,n;
    printf("\nEnter the First Name :-");
    scanf("%s",fname);
    l = strlen(fname);
    n = l;
    for ( i = l; i >0; i--)
    {
        for ( j = 0; j<i; j++)
        {
            printf("%c",fname[j]);
        }
        printf("\n");
    }
    return 0;
}
