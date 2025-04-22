/* write a program input your name and print format bellow-
Eg:- *
     *
     **
     ***
     ****
     *****
*/
#include<stdio.h>
int main()
{
    char n = '*';
    int i,j;
    //printf("enter symbol:-");
    //scanf("%c",&n);
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            printf("%c",n);
        }
        printf("\n");
    }
    return 0;
}
