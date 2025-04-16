/* Create array storage the roll no and Total marks 15 student finally print merit list in a
formate show on below */

#include<stdio.h>
int main()
{
    int i, j, swap,big;
    int roll_no[15] = {111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125};
    int total_marks[15] = {511, 248, 560, 520, 480, 380, 360, 590, 565, 320, 311, 440, 375, 580, 250};
    for ( i = 0; i <= 13; i++)
        {
            for ( j = i+1; j <= 14; j++)
            {
                if(total_marks[j] > total_marks[i])
                {
                    big = total_marks[i];
                    total_marks[i] = total_marks[j];
                    total_marks[j] = big;
                    swap = roll_no[i];
                    roll_no[i] = roll_no[j];
                    roll_no[j] = swap;
                }
            }
        }
        printf("\n Merit List   Roll No. \tTotal Marks\n");
        for ( i = 0; i <= 14; i++)
            printf("\n\t%d  \t%d \t  %d",i+1,roll_no[i],total_marks[i]);
    return 0;
}
