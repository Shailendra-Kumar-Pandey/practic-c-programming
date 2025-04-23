/* write a program to print and store an array size 5 sorting descending order and print */
#include<stdio.h>
void sort(int *);
void display(int *);
int main()
{
    int a[5],i,s[5];
    for ( i = 0; i <= 4; i++)
    {
        printf("\nEnter the number:");
        scanf("%d",&a[i]);
    }
    sort(a);
    display(a);
    return 0;
}
void sort(int *x)
{   int i,j,big;
    for ( i = 0; i <=3; i++)
    {
        for ( j = i+1; j <=4 ; j++)
        {
            if (*(x+j)>*(x+i))
            {
                big = *(x+i);
                *(x+i)=*(x+j);
                *(x+j)=big;
            }
        }
    }
}
void display(int *p)
{
    int i;
    printf("\nSort Array Element\n");
    for ( i = 0; i <= 4; i++)
        printf(" %d ",*(p+i));
}
