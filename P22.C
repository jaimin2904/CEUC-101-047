/* aim:calculate the area and perimeter of a rectangular park
   programmer: jaimin
   date:28/7/25 */
#include<stdio.h>
#include<conio.h>
  int main()
{
    float length,breadth,area,perimeter;
    clrscr();
  length=70;
  breadth=90;

  area=length*breadth;
  perimeter=2*(length+breadth);

  printf("area is a : %f\n",area);
  printf("perimeter ia a: %f\n",perimeter);

  getch();
  return 0;
  }