/* aim:
  programmer:
  data:25/8/25  */

#include<stdio.h>
#include<conio.h>
  void main()
{
	  int r,c;
	  clrscr();
	  for(r=1;r<=10;r++)
  {
	  for(c=1;c<=5;c++)
   {
	 printf("%d\t",r*c);
   }
	 printf("\n");
  }
	 getch();
}
