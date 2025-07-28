/*find the BMI
 programmer : jaimin
 date : 21/07/2025*/
#include<stdio.h>
#include<conio.h>
 void main ()
{
  float w,h,BMI;
  clrscr();
  printf( "enter your weight in kg:");
  scanf("%f",&w);
  printf("enter your height in meters:");
  scanf("%f",&h);
  BMI=w/(h*h);
  printf("BMI: %f",BMI);
  getch();
  }