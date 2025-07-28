
/*


*/
#include<stdio.h>
#include<conio.h>
void main()
{
   float amount;
   clrscr();
   printf("enter your perches amount:");
   scanf("%f",&amount);
   if(amount<1000)
   {
     printf("you get no dis:%f",amount);
     }
   else if(amount<=5000)
   {
   printf("you get dis 10 perc %f",amount-amount*10/100);
   }
   else
   {
   printf("you get dis 20 perc %f",amount-amount*20/100);
   }
   getch();
}