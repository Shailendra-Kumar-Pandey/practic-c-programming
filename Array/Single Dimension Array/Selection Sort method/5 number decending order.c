/* Create an array of size 05 inputting number and show decending order print array */
#include<stdio.h>
int swap(int,int);
int main()
{
    int a[5],i,n,j;
    for ( i = 0; i < 5; i++)
    {
        printf("\n Enter the NUmber :");
        scanf("%d",&n);
        a[i] = n;
        for ( j = 0; j > i; j++)
        {
            int big;
            if (a[i]>a[i+1])
            {
                a[i] = a[i];
            }else{
                big = a[i+1];
                a[i+1]=a[i];
                a[i]=big;
            }
        }
    }
    for ( i = 0; i < 5; i++)
        printf(" %d ",a[i]);
    return 0;
}
