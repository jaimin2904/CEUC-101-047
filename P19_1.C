/* aim:
   progremmer:
   date:25/8/25 */
#include<stdio.h>
#include<conio.h>
void main()
{
     int r,c;
     clrscr();

     for(r=1;r<=4;r++)
 {
     for(c=1;c<=r;c++)

     if(c%2!=0)
   {
      printf("1");
   }
     else

      printf("0");


     printf("\n");
 }
     getch();
}