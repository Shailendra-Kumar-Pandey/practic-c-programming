/* to calculate and print sum 1/1 + 1/2 + 1/3 +.....+ 1/20 */

#include<stdio.h>
int main()
{
    float i = 1, s = 0;
    while (i<20)
    {
        i = i + 1;
        s = s + (1/i);
    }
    printf("\n Sum is = %f",s);
    return 0;
}