#include<stdio.h>
#include<conio.h>
void main()
{
   int N,i,sum=0,total,missing,arr[100];
   clrscr();
   printf("enter total number of participants(N):");
   scanf("%d",&N);
   printf("enter %d participant ids \n",N-1);

     for(i=0;i<N-1;i++)
     {
       scanf("%d",&arr[i]);
       sum+=arr[i];
      }
      total=N*(N+1)/2;
      missing=total-sum;
      printf("missing participants id is %d\n",missing);

       getch();
}



