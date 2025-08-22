#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i;
  clrscr();
  n=21;
  while(n>1)
{
   printf("your turns\n");
   printf("enter the number of matchstick you want to take: ");
   scanf("%d",&i);
   if(i<1 || i>4)
{
   printf("enter between 1 to 4\n");
}
else
{
  n=n-i;
  printf("remaining matchstick is %d\n",n);
  printf("computer turns:computer selecte:%d\n",5-i);
  n=n-(5-i);
  if(n>0)
  printf("remaining matchstick is %d\n",n);
  if(n==1)
  break;
}
}
  printf("you loss the game\n ");
  getch();
 }
