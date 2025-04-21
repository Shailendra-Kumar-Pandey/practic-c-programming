/* Write a program to using string function {strlen(<string name>)}  */
#include<stdio.h>
int main()
{
    char a[]= "Shailendra Kumar Pandey";
    int l1, l2;
    l1 = strlen(a);
    l2 = strlen("Satna");
    printf("\nString = %s Length = %d",a,l1);
    printf("\nString = %s Length = %d","Satna",l2);
    return 0;
}
