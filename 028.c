//program to display which is the costliest pen
# include<stdio.h>
main()
{
int r,m,p;

    printf("Enter cost of Reynolds , Montex and Parker : ");
    scanf("%d%d%d",&r,&m,&p);

    if(r>m && r>p)
        printf("Reynolds is costliest");
    else
        if(m>r && m>p)
            printf("Montex is costliest");
    else
            printf("Parker is costliest");
}

