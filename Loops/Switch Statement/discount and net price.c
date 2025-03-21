/* Write a program to calculate and print discount and net price. Rate of discount depends on group code.
Consider group codes as,
if GC = 1 then R = 10%;
if GC = 2 or 3 then R = 20%;
if GC = 4 or 5 then R = 30%;
if GC = 6 then R = 40%;
to stop GC = 7 */

#include<stdio.h>
int main()
{
    int gc;
    float r, d, c, nc;
    do
    {
        d = 0, nc = 0;
        printf("\n Enter Group Code (1-7) :");
        scanf("%d",&gc);
        switch (gc)
            {
                case 1:
                        printf("\n Enter Cost Value :");
                        scanf("%f",&c);
                        r =10;
                        d = c * r /100;
                        nc = c - d;
                        printf("\n Discount = %f  Net-Cost = %f ",d,nc);
                        break;
                case 2:
                case 3:
                        printf("\n Enter Cost Value :");
                        scanf("%f",&c);
                        r = 20;
                        d = c * r /100;
                        nc = c - d;
                        printf("\n Discount = %f  Net-Cost = %f ",d,nc);
                        break;
                case 4:
                case 5:
                        printf("\n Enter Cost Value :");
                        scanf("%f",&c);
                        r = 30;
                        d = c * r /100;
                        nc = c - d;
                        printf("\n Discount = %f  Net-Cost = %f ",d,nc);
                        break;
                case 6:
                        printf("\n Enter Cost Value :");
                        scanf("%f",&c);
                        r = 40;
                        d = c * r /100;
                        nc = c - d;
                        printf("\n Discount = %f  Net-Cost = %f ",d,nc);
                        break;
                case 7:
                        break;
                default:
                        printf("\n Invalid Group Code...");
            }
    } while (gc!=7);
    return 0;
}

// #include<stdio.h>
// int main()
// {
//     int gc;
//     float r, d, c, nc;
//         d = 0, nc = 0;
//         printf("\n Enter Group Code (1-7) :");
//         scanf("%d",&gc);
//         switch (gc)
//             {
//                 case 1:
//                         printf("\n Enter Cost Value :");
//                         scanf("%f",&c);
//                         r =10;
//                         d = c * r /100;
//                         nc = c - d;
//                         printf("\n Discount = %f  Net-Cost = %f ",d,nc);
//                         break;
//                 case 2:
//                 case 3:
//                         printf("\n Enter Cost Value :");
//                         scanf("%f",&c);
//                         r = 20;
//                         d = c * r /100;
//                         nc = c - d;
//                         printf("\n Discount = %f  Net-Cost = %f ",d,nc);
//                         break;
//                 case 4:
//                 case 5:
//                         printf("\n Enter Cost Value :");
//                         scanf("%f",&c);
//                         r = 30;
//                         d = c * r /100;
//                         nc = c - d;
//                         printf("\n Discount = %f  Net-Cost = %f ",d,nc);
//                         break;
//                 case 6:
//                         printf("\n Enter Cost Value :");
//                         scanf("%f",&c);
//                         r = 40;
//                         d = c * r /100;
//                         nc = c - d;
//                         printf("\n Discount = %f  Net-Cost = %f ",d,nc);
//                         break;
//                 case 7:
//                         break;
//                 default:
//                         printf("\n Invalid Group Code...");
//             }
//     return 0;
// }