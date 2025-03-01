/* to calculate and print sum 1/1 + 1/2 + 1/3 +.....+ 1/20 */

#include<stdio.h>
int main()
{
    float i = 0, t=0, s = 0;
    while (i<20)
    {
        i = i + 1;
        t = 1/i;
        s = s + t;
    }
    printf("\n Sum is = %f",s);
    return 0;
}
