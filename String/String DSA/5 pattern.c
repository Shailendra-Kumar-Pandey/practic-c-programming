/* write a program input your name and print format bellow-
Eg:-
     1
     12
     123
     1234
     12345
*/
#include<stdio.h>
int main()
{
    int n[5];
    int i,j,l;
    l = 5;
    for ( i = 0; i < l; i++)
    {
        n[i] = i+1;
        for ( j = 0; j <= i; j++)
        {
            printf("%d",n[j]);
        }
        printf("\n");
    }
    return 0;
}
