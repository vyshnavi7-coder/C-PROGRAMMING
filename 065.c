// program to calculate and print the eletricity bill
 #include<stdio.h>
 main()
 {
  char name;
  int id,units;
  float net_amt,surcharge_amt,total;
  id=units=net_amt=surcharge_amt=0;

  printf("enter ur name:");
  scanf("%c",&name);
  printf("enter ur customer id:");
  fflush(stdin);
  scanf("%d",&id);
  printf("enter units consumed:");
  fflush(stdin);
  scanf("%d",&units);

  if(units<=199)
    total = units*1.20;
  else
     if(units>=200 && units<400)
     total=units*1.50;
    else
      if(units>=400 && units<600)
     total=units*1.80;
    else
      if(units>=600)
      total=units*2.00;
     if(total>400)
        surcharge_amt=total*15/100;
    net_amt=surcharge_amt+total;
    printf("net amt is:%f",net_amt);
 }

