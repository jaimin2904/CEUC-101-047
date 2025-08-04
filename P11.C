/*aim:
 programeer:
 date:
 */
#include<stdio.h>
#include<conio.h>
int main()
{
  int m;
  clrscr();
  printf("enter your mark");
  scanf("%d",&m);

 (m>=0&&m<=100)? (m>=90&&m<=100)?printf("grade a"):(m>=80&&m<90)?printf("grade b"):(m>=70&&m<80)?printf("grade c"):(m>=60&&m<70)?printf("grade d"):printf("grede f"):printf("fail");
  return 0;

  }