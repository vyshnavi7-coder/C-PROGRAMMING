//program to read temperature and display suitable message accordingly
# include<stdio.h>
main()
{
    int temp;
    temp=0;

    printf("Input temperature in centigrade : ");
    scanf("%d",&temp);

    if(temp<0)
        printf("Freezing Weather");
    else
    {
        if(temp>0 && temp<10)
        printf("Very Cold Weather");
    else
        if(temp>10 && temp<20)
                printf("Cold Weather");
                else
                if(temp>20 && temp<30)
                printf("Normal Weather");
                else
                    if("temp>30 && temp<40")
                        printf("It's Hot");
                    else
                        printf("It's Very Hot");
    }
}

