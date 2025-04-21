/* Write a program to using string function {strcat(<string name>)}  */
#include<stdio.h>
int main()
{
    char source[]= "Shailendra Kumar Pandey";
    char target[40]="hello! ";
    strcat(target,source);
    printf("\nSource String = %s",source);
    printf("\nTarget String = %s",target);
    return 0;
}
