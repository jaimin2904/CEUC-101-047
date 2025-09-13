/*aim:to give grades based on marks.
 programeer:jaimin khambhliya 
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

 (m>=0&&m<=100)? (m>=90)?printf("grade a"):(m>=80)?printf("grade b"):(m>=70)?printf("grade c"):(m>=60)?printf("grade d"):printf("grede f"):printf("fail");
  return 0;


  }

