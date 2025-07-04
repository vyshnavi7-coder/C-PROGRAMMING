//2.program to marks of 5 subjects English , Sanskrit , maths, physics& chemistry, calculate total & average. #include<Stdio.h>
main()
{
    int eng,san,math,phy,che;
    float total,avg;

    //input:

    printf("enter the marks of english:");     scanf("%d",&eng);

    printf("enter the marks of sanskrit:");     scanf("%d",&san);

    printf("enter the marks of maths:");     scanf("%d",&math);

    printf("enter the marks of physics: ");     scanf("%d",&phy);

    printf("enter the marks of che: ");     scanf("%d",&che);

    //output:
    total=eng+san+math+phy+che;
    avg=total/6;

    printf("the total is: %f",total);
    printf("\n the avg is: %f",avg);
    printf("\n");
}

