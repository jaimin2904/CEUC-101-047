#include<stdio.h>
#include<conio.h>
void main()
{
   int n=5,r,c;
   clrscr();
   for(r=1;r<=5;r++)
   {
      for(c=1;c<=9;c++)
      {

	if(r==c||c==n*2-r)
	{
	  printf("%d",c);
	}
	else if(r==1)
	{
	  printf("%d",c);
	}
	else
	 printf(" ");
      }
      printf("\n");
   }
getch();
}