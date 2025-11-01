#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   int str[5],i,k=0,max,n;
   clrscr();

   printf("how many days prices:");
   scanf("%d",&n);

   printf("enter prices:");
     for(i=0;i<n;i++)
    {
      scanf("%d",&str[i]);
    }
       for(i=1;i<n;i++)
      {
	 max=str[i-1]-str[i];
	 if(max > k)
	 {
	   k=max;
	 }
  }
     printf("max profit: %d",k);

     getch();
 }