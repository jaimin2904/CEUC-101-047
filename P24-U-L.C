#include<stdio.h>
#include<conio.h>
int main()
{
   char n[200];
   int i;
   clrscr();
   gets(n);
     for(i=0;n[i]!='\0';i++)
     {
       if(n[i]>='A' && n[i]<='Z')
       {
	 n[i]=n[i]+32;
       }
     }
     printf("%s",n);
     return 0;

     }
