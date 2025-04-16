/* Write a program to create an array of size 4 by 4 load array with any numbers.
 Print array as will as sum of 1nd diagonal elements (trace of matrix) */
 #include<stdio.h>
int main()
{
    int a[4][4],i,j,sum=0;
    for ( i = 0; i <= 3; i++)
    {
        for ( j = 0; j <= 3; j++)
        {
            printf("\n Enter the Number :");
            scanf("%d",&a[i][j]);
            if ((i==0 && j==3) || (i==1 && j==2) || (i==2 && j==1) || (i==3 && j==0))
                sum = sum + a[i][j];
        }
    }
    printf("\n Array Element are \n");
    for ( i = 0; i <= 3; i++)
        printf("\n%d \t%d \t%d \t%d",a[i][0],a[i][1],a[i][2],a[i][3]);
    printf("\n\n 2nd diagonal element Sum = %d",sum);
    return 0;
}
