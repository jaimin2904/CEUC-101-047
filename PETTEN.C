#include<stdio.h>
#include<conio.h>
void main()
{
   int R,C,r1,k,r2,i,r;
   clrscr();
   printf("enter no. of row:");
   scanf("%d",&R);  //R=total row
   r1=(R/2)+1;
   r2=R/2;

   for(i=1;i<=r1;i++)
   {
     for(r=1;r<=r1-i;r++)
     {
       printf(" ");
     }
       for(r='A';r<='A'+i-1;r++)
       {
	 printf("%c",r);
       }
	 k=65+i-2;
	 for(r=1;r<=i-1;r++)
	 {
	   printf("%c",k);
	   k--;
	  }

	printf("\n");
    }
	   for(i=1;i<=r2;i++)
	   {

	    for(r=1;r<i+1;r++)
	    {
	      printf(" ");
	    }
	      for(r='A';r<='A'+r2-i;r++)
	      {
		 printf("%c",r);
	      }
	      k=65+r2-i-1;
	      for(r=0;r<r2-i;r++)
	      {
	       printf("%c",k);
	       k--;
	      }









  printf("\n");

    }
      getch();
      }
