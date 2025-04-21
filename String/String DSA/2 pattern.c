/* write a program input your name and print format bellow-
Eg:- JEETU
     UTEEJ
*/
#include<stdio.h>
int main()
{
    char fname[30],b[30];
    int i,j,l;
    printf("\nEnter the First Name :-");
    scanf("%s",fname);
    l = strlen(fname);
    for ( i = 0; i < l; i++)
    {
        for ( j = 0; j <=i ; j++)
        {
            b[j] = fname[l-1];
        }
        //printf("\n");
         printf("\n %c",b[i]);
    }

    return 0;
}
