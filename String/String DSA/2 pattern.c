/* write a program input your name and print format bellow-
Eg:- JEETU
     UTEEJ
*/
#include<stdio.h>
int main()
{
    char fname[30];
    int i,l;
    printf("\nEnter the First Name :-");
    scanf("%s",fname);
    l = strlen(fname);
    for ( i = l; i>=0; i=i-1)
        printf("%c",fname[i]);
    return 0;
}
