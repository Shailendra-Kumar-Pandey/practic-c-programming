/* write a program input your name and print format bellow-
Eg:- *
     *****
     ****
     ***
     **
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
    for ( i = 5; i > 0; i--)
    {
        for ( j = 0; j < i; j++)
        {
            printf("%c",n);
        }
        printf("\n");
    }
      for ( i = 1; i < 5; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            printf("%c",n);
        }
        printf("\n");
    }
    return 0;
}
