//program to accept that height of a person in centimeter and categorize the person based on height as taller
 #include<stdio.h>
  main()
  {
   float height_cm,height_ft;

   printf("enter height in cm:");
   scanf("%f",&height_cm);
   height_ft=height_cm/30.48;

   if(height_ft>5.5)
     printf("the person is taller \n");
   else if (height_ft<4.5)
     printf("the person is dwarf(low height)\n");
   else
    printf("the person is of avg height\n");
  }

