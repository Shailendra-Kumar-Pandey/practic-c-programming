/* write a program  to subtract 1st 3*3 matrix from 2nd 3*3 matrix */
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],s[3][3],i,j;
    for ( i = 0; i <= 2; i++)
    {
        for ( j = 0; j <= 2; j++)
        {
            printf("\n Enter two Number :");
            scanf("%d %d",&a[i][j],&b[i][j]);
            s[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("\n new Element are \n");
    for ( i = 0; i <= 2; i++)
        printf("\n%d \t%d \t%d",s[i][0],s[i][1],s[i][2]);
    return 0;
}
