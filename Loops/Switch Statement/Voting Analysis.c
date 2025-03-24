/* Write a Program to Print Number of Votes Secured by 5 contestants in an election,
 also print winners no. of votes Separately. */

 #include<stdio.h>
 int main()
 {
    int bjp=0, cog=0, aap=0, sp=0, bsp=0, v;
    do
    {
        printf("\nEnter your Vote of Interest Condidat (1-5) : ");
        scanf("%d",&v);
        switch (v)
        {
        case 1:
            bjp = bjp + 1;
            printf("\nYour Vote in BJP...");
            break;
        case 2:
            cog = cog + 1;
            printf("\nYour Vote in COG...");
            break;
        case 3:
            aap = aap + 1;
            printf("\nYour Vote in AAP...");
            break;
        case 4:
            sp = sp + 1;
            printf("\nYour Vote in SP...");
            break;
        case 5:
            bsp = bsp + 1;
            printf("\nYour Vote in BSP...");
            break;
        case 6:
            printf("\nBJP Votes = %d \nCOG Votes = %d \nAAP Votes = %d \nSP Votes = %d \nBSP Votes = %d", bjp, cog, aap, sp, bsp);
            break;
        default:
            printf("\nInvalid Vote Please Enter Valid Vote...");
        }
        if (v == 6)
        {
            printf("\nFinal Result...");
            if(bjp>cog && bjp>aap && bjp>sp && bjp>bsp)
                printf("\nThe Winner is BJP with %d Votes",bjp);
            else
                if (cog>aap && cog>sp && cog>bsp)
                    printf("\nThe Winner is COG with %d Votes",cog);
                else
                    if(aap>sp && aap>bsp)
                        printf("\nThe Winner is AAP with %d Votes",aap);
                    else
                        if(sp>bsp)
                            printf("\nThe Winner is SP with %d Votes",sp);
                        else
                            printf("\nThe Winner is BSP with %d Votes",bsp);
        }
    } while (v!=6);
    return 0;
 }
