#include<stdio.h>
#include<conio.h>
void main()
{
   int i=1,j=1,k=1,r;
   clrscr();
   printf("no.of row:");
   scanf("%d",&r);


  do
  {
     do
     { if(i!=r)
      {
       printf(" ");
       j++;
      }
     }
      while(j<=r-i);

    do
    {
      printf("%d",k);
      k++;
      printf(" ");
    }
    while(k<=i);

    printf("\n");

    i++;
    j=1;
    k=1;
  }while(i<r+1);
  getch();
  }
