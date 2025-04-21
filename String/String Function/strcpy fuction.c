/* Write a program to using string function {strcpy(<string name>)}  */
#include<stdio.h>
int main()
{
    char source[]= "Shailendra Kumar Pandey";
    char target[30];
    strcpy(target,source);
    printf("\nSource String = %s",source);
    printf("\nTarget String = %s",target);
    return 0;
}
