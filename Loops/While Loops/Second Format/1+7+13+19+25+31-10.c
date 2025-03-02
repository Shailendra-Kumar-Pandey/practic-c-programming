/* 1+7+13+19+25+31-10 calculate */

#include<stdio.h>
int main()
{       /* CD= 6, i= i+6; i+6=1,i= 1-6, [{i=-5}]; s=-10, s= s+i */
    int i= -5, s= -10;
    while(i<31)
        {
            i= i+6;
            s= s+i;
        }
    printf("\n Calculate is = %d",s);
    return 0;
}
