/* Write a Program to generate and print Prime Number 1st up to 100 */
#include<stdio.h>
int main()
{   /* 2, 3, 5, 7, 11, 13, 17, 19, 23, 29,  */
    int j=2,i=2;
    for(i=2;i<100;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
            printf(" %d ",i);
    }
    return 0;
}
