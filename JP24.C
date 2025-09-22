#include<stdio.h>
#include<conio.h>


void main()
{
  int i,l=0,r,q;
  char n[10],m[10],n1[10],k[10],u[10],g[10];

     clrscr();

   gets(n);
   gets(n1);
   gets(u);
      for(i=0;n[i]!='\0';i++)
     {
	l++;

     }
	for(i=0;n[i]!='\0';i++)
       {
	  r=l-i-1;
	  m[r]=n[i];
       }
	for(i=0;n[i]!='\0';i++)
	{
	  k[i]=n[i];
	}
	for(i=0;u[i]!='\0';i++)
       {
	 g[i]=u[i];
	}

	  m[l]='\0';
	  k[l]='\0';
   printf("\n%d",l); //length
   printf("\n%s",k); //copy
   printf("\n%s",m); //riv
   printf("\n%s",g);
   getch();

}