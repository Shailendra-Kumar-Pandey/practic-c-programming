/* Write a program to create an array of size 5 inputting user number and print to array sort
 descending order (Using Bubble Sort Method) */
 #include<stdio.h>
 int main()
 {
    int a[5],i,j,b;
    for ( i = 0; i <= 4; i++)
      {
        printf("\nEnter the Number : ");
        scanf("%d",&a[i]);
      }
    for ( i = 0; i <= 3; i++)
    {
        for ( j = 0; j <= 3-i; j++)
        {
            if (a[j+1]>a[j])
            {
                b = a[j];
                a[j] = a[j+1];
                a[j+1] = b;
            }
        }
    }
    printf("\n Bubble gitSort array element \n");
    for ( i = 0; i <= 4; i++)
        printf(" %d ",a[i]);
    return 0;
 }
