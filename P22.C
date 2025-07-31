/* aim:calculate the area and perimeter of a rectangular park
   programmer: jaimin
   date:28/7/25 */
#include<stdio.h>
#include<conio.h>
  int main()
{   int fc,glc;
    float length,breadth,area,perimeter,x,y;
    clrscr();
  length=70;
  breadth=90;
  fc=100;//fc=fencing cost
  glc=120;

  area=length*breadth;
  perimeter=2*(length+breadth);

  printf("area is a              :  %.2f\n",area);
  printf("perimeter ia a         :   %.2f\n",perimeter);
  x=perimeter*fc;
  printf("your fencing cost is   : %.2f\n",x);
  y=area*glc;
  printf("your grass laying cost :%.2f\n",y);

  getch();
  return 0;
  }