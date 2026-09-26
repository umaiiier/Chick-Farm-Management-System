#include <stdio.h>

      int main()
      {
      int shed_2 = 100;
      int shed_3 = 100;
      int shed_4 = 100;

      printf("---- WElCOME TO CHICK FARM -----\n\n");
      
      // per shed egg quantity

      printf("SHED#2 Perday Eggs: %d \n", shed_2*2);
      printf("SHED#3 Perday Eggs: %d \n" , shed_3*2);
      printf("SHED#4 Perday Eggs: %d \n\n" , shed_4*2);

      // SUM OF SHED 2&4 WHOLE WEEK
      
      printf("Weekly Quantity of Shed 2 & 4:  %d \n\n" , shed_2*2*7 + shed_4*2*7);

      // SUM OF EGGS LAID BY SHED 3 Perday sat/sun OFF

      printf("SHED#3 Perday Eggs: %d \n\n" , shed_3*2);

      //  SUM OF EGGS LAID BY SHED 3 Perweek  sat/sun OFF

      printf("SHED#3 Perweek Eggs: %d \n\n" , shed_3*2*5); 