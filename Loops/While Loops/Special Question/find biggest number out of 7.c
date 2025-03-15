/* Write a program compare and print Biggest out of 7 numbers 

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

2nd method:-   

#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,big;
    printf("\n Enter first the Number : ");
    scanf("%d",&a);
    printf("\n Enter Second the Number : ");
    scanf("%d",&b);
    printf("\n Enter third the Number : ");
    scanf("%d",&c);
    printf("\n Enter forth the Number : ");
    scanf("%d",&d);
    printf("\n Enter fivth the Number : ");
    scanf("%d",&e);
    printf("\n Enter sixeth the Number : ");
    scanf("%d",&f);
    printf("\n Enter Seventh the Number : ");
    scanf("%d",&g);
    if(a>b)
        big = a;
    else
        big = b;
    if(c>big)
        big = c;
    if(d>big)
        big = d;
    if(e>big)
        big = e;
    if(f>big)
        big = f;
    if(g>big)
        big = g;
    printf("\n Biggest Number is = %d",big);
    return 0;
}

3rd Method */

#include<stdio.h>
int main()
{
int a,b,c,d,e,f,g,big;
    printf("\n Enter first the Number : ");
    scanf("%d",&a);
    printf("\n Enter Second the Number : ");
    scanf("%d",&b);
    printf("\n Enter third the Number : ");
    scanf("%d",&c);
    printf("\n Enter forth the Number : ");
    scanf("%d",&d);
    printf("\n Enter fivth the Number : ");
    scanf("%d",&e);
    printf("\n Enter sixeth the Number : ");
    scanf("%d",&f);
    printf("\n Enter Seventh the Number : ");
    scanf("%d",&g);
    big = a>b ? a : b;
    big = c>big ? c : big;
    big = d>big ? d : big;
    big = e>big ? e : big;
    big = f>big ? f : big;
    big = g>big ? g : big;
    printf("\n Biggest Number is = %d",big);
    return 0;
}