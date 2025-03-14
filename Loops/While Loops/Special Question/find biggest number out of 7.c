/* Write a program compare and print Biggest out of 7 numbers */
#include<stdio.h>
int main()
{
    int a, b, c, d, e, f, g;
    printf("\n Enter the 7 Number : ");
    scanf("%d%d%d%d%d%d%d",&a, &b, &c, &d, &e, &f, &g);
    if (a>b && a>c && a>d && a>e && a>f && a>g)
            printf("\n Biggest Number is =%d",a);
    else if (b>c && b>d && b>e && b>f && b>g)
                printf("\n Biggest Number is = %d",b);
         else if (c>d && c>e && c>f && c>g)
                    printf("\n Biggest Number is = %d",c);
                else if(d>e && d>f && d>g)
                        printf("\n Biggest Number is = %d",d);
                    else if (e>f && e>g)
                            printf("\n Biggest Number is = %d",e);
                        else if (f>g)
                                printf("\n Biggest Number is = %d ",f);
                            else
                                printf("\n Biggest Number is = %d",g);
    return 0;
}