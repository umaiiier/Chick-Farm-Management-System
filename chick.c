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

      // Weekly Total Eggs Laid By SHED 2,3,4
      
      int total_quantity = shed_2*2*7 + shed_3*2*5 + shed_4*2*7;

      printf("Total Eggs of All SHEDS %d \n\n\n\n", total_quantity);


      // Egg Price

      int Egg_Cost = 10;
      float Egg_Cost_Tax = 1.50 + Egg_Cost;


      // Weekly revenue not asked in Question But Without This its Impossible

      int Weekly_revenue = Egg_Cost * total_quantity;
      printf("REVENUE WITHOUT TAX (SHED 2,3,4)\n");
 
      // Revenue Without Tax

      // Daily Revenue Without TAX

      int Daily_Revenue = Weekly_revenue / 7;
      printf("Daily Revenue: Rs %d \n", Daily_Revenue);


      // Monthly Revenue Without TAX

      int monthly_Revenue = Daily_Revenue * 30;
      printf("Monthly Revenue: Rs %d \n", monthly_Revenue);
      
      // Yearly Revenue Without TAX

      int yearly_Revenue = Daily_Revenue * 365;
      printf("yearly Revenue : Rs %d \n\n\n\n", yearly_Revenue);

      //Revenue With TAX
       
       

      // Weekly revenue not asked in Question But Without This its Impossible

       int Weekly_revenue_Tax = Egg_Cost + Egg_Cost_Tax * total_quantity;
       
       printf("REVENUE WITH TAX (SHED 2,3,4)\n");
 
      // Daily Revenue Without Tax

      int Daily_Revenue_TAX =  Weekly_revenue_Tax / 7;
      printf("Daily Revenue: Rs %d \n", Daily_Revenue_TAX);


      // Monthly Revenue Without TAX

      int monthly_Revenue_TAX = Daily_Revenue_TAX * 30;
      printf("Monthly Revenue: Rs %d \n", monthly_Revenue_TAX);
      
      // Yearly Revenue Without TAX

      int yearly_Revenue_TAX = Daily_Revenue * 365;
      printf("yearly Revenue : Rs %d \n\n\n\n", yearly_Revenue_TAX);


     return 0;

      }
