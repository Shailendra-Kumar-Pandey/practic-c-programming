/* Calculate  1-2+3-4+5-6+7 */
#include<stdio.h>
int main()
{           /* CD = 1, i= i+1; i+1=1, i=1-1, i=0; s= 0, s= s +t; t=0, t= i*sn; sn=1 */
    int i= 0, s= 0, t= 0, sign= 1;
    while (i<7)
    {
        i= i+1;
        t= i*sign;
        s = s + t;
        sign= sign*(-1);
        printf("\n Show Number = %d",t);
    }
    printf("\n Calculate is =%d",s);
    return 0;
}
