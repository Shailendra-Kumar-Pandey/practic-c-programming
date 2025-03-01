/* Calculate  1-2+3-4+5-6+7 */
#include<stdio.h>
int main()
{           /* CD = 1, i= i+1; i+1=1, i=1-1, i=0; s= 0, s= s +t; t=0, t= i*-1; */
    int i= 0, s= 0,t= 0;
    while (i<7)
    {
        i= i+1;
        if (i%2==0)
            t = i*-1;
        else
            t = i;
        s = s + t;
        printf("\n Show Number = %d",t);
    }
    printf("\n Calculate is =%d",s);
    return 0;
}
