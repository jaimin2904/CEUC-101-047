#include<stdio.h>
#include<conio.h>


void main()
{
  int i,l=0,r;
  char n[10],m[10];
  clrscr();
   gets(n);
  for(i=0;n[i]!='\0';i++)
  {
     l++;
  }
   for(i=0;n[i]!='\0';i++)
   {
     r=l-i-1;
     m[r]=n[i];
    }
    m[l]='\0';
    printf("%s",m);

   printf("\n%d",l);

   getch();


}