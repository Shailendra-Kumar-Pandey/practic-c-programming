/* To generate and print first 10 even number {Using Pointer an Array} */
#include<stdio.h>
int main()
{
    int a[10],i,j=0,*p;
    for ( i = 0; i <= 9; i++)
    {
        j = j+2;
        a[i] = j;
    }
    p = &a[0];
    printf("\nArray element are\n");
    for ( i = 0; i <=9 ; i++)
    {
        printf("\n Value=%d Value=%d Address=%u",*(p+i),a[i],p+i);
    }
    return 0;
}
