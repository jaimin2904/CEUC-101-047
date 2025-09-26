#include<stdio.h>
#include<conio.h>
int main()
{
  char str[200];
  int i,n=1;
  clrscr();
  printf("enter your string:");
  gets(str);

      for(i=0;str[i]!='\0';i++)
      {
	 if(str[i]==' ')
	 {
	  n=1;
	 }
	 else
	 {
	   if(n==1)
	   {

		if(str[i]>='a' && str[i]<='z')
		{
		   str[i]=str[i]-32;
		 }
		 n=0;
	   }
	    else
	    {
	      if(str[i]>='A' && str[i]<='Z')
	      {
		str[i]=str[i]+32;
	       }
	    }
	 }
     }
      printf("%s",str);
      return 0;
      }