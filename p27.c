#include<stdio.h>
void sum(int n);
int main()
{  int n;
    printf("enter month:");
   scanf("%d",&n);
   printf("1\n");
    printf("1\n");

   sum(n);
   return 0;
}

void sum(int n)
{
    int s1=1;
    int s2=1;
    for(int i=0;i<n-2;i++)
    {

    int x= s1+s2;
    printf("%d",x);
    s1=x;
    s2=s1;
     printf("\n");
    }
}
