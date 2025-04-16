/* Write a program to create an array of size 4 by 4 load array with any numbers.
 Print array as will as and print transpose given 4 by 4 matrix) */
 #include<stdio.h>
int main()
{
    int a[4][4],i,j;
    for ( i = 0; i <= 3; i++)
    {
        for ( j = 0; j <= 3; j++)
        {
            printf("\n Enter the Number :");
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n transpose Array Element are \n");
    for ( j = 0; j <= 3; j++)
        printf("\n%d \t%d \t%d \t%d",a[0][j],a[1][j],a[2][j],a[3][j]);
    return 0;
}
