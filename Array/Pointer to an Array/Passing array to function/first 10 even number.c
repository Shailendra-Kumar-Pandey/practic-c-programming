/* To generate and print first 10 even number {Using Pointer and pointer an Array} */
#include<stdio.h>
void display(int *);
int main()
{
    int a[10],i,j=0;
    for ( i = 0; i <= 9; i++)
    {
        j = j+2;
        a[i] = j;
    }
    display(a);
    return 0;
}
void display(int *p)
{   
    int i;
    printf("\nArray element are\n");
    for ( i = 0; i <=9 ; i++)
    {
        printf("\n Value=%d ",*(p+i));
    }
}