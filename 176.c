//program to fill the 3*4 array with odd nos
#include<stdio.h>
main()
{
    int no[3][4],i,j,odd=1;
    for(i=0;i<3;i++)
    {
       for(j=0;j<4;j++)
       {
           no[i][j]=odd;
           odd+=2;
       }
    }
    printf("\n\n output:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\t %d",no[i][j]);
        }
        printf("\n");
    }
}

