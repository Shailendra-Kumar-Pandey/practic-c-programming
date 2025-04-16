/* write a program  to add 2 given 3 by 3 square matrix */
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],add[3][3],i,j;
    for ( i = 0; i <= 2; i++)
    {
        for ( j = 0; j <= 2; j++)
        {
            printf("\n Enter two Number :");
            scanf("%d %d",&a[i][j],&b[i][j]);
            add[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\n Add Element are \n");
    for ( i = 0; i <= 2; i++)
        printf("\n%d \t%d \t%d",add[i][0],add[i][1],add[i][2]);
    return 0;
}
