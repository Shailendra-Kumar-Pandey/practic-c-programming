/* write a program input your name and print format bellow-
Eg:- JEETU
     J
     E
     E
     T
     U
*/
#include<stdio.h>
int main()
{
    char fname[30];
    int i,l;
    printf("\nEnter the First Name :-");
    scanf("%s",fname);
    l = strlen(fname);
    for ( i = 0; i < l; i++)
        printf("\n %c",fname[i]);
    return 0;
}
