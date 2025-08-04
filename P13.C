/* aim
  programeer:
  date:4/08/25 */
#include<stdio.h>
#include<conio.h>
void main()
{
  int p;
  clrscr();
  for(p=0;p<=100;p=p+10)
{
  if(p%10==0)
  printf("\nthe current water level is %d litre",p);
  if(p==100)
  printf("\ntank is full");
}
  getch() ;
}