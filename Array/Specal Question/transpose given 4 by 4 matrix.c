/* Write a program to create an array of size 4 by 4 load array with any numbers.
 Print array as will as and print transpose given 4 by 4 matrix) */
 #include<stdio.h>
int main()
{
    int a[4][4],t[4][4],i,j;
    for ( i = 0; i <= 3; i++)
    {
        for ( j = 0; j <= 3; j++)
        {
            printf("\n Enter the Number :");
            scanf("%d",&a[i][j]);
            t[j][i] = a[i][j];
        }
    }
    printf("\n Array element are \n");
    for( i = 0; i <= 3; i++)
        printf("\n%d \t%d \t%d \t%d",a[i][0],a[i][1],a[i][2],a[i][3]);
    printf("\n transpose Array Element are \n");
    for( i = 0; i <= 3; i++)
        printf("\n%d \t%d \t%d \t%d",t[i][0],t[i][1],t[i][2],t[i][3]);
    return 0;
}
