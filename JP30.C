#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    float *p,*t,*q;

    printf("enter number of ietems:");
    scanf("%d",&n);

  p=(float *)calloc(n,sizeof(float));
  q=(float *)calloc(n,sizeof(float));

  t=p;

   for(i=1;i<=n;i++,p++)
   {
       scanf("%f",p);

   }
       p=t;

    for(i=1;i<n;i++,p++)
    {
         q=p+1;
        for(j=i+1;j<=n;j++,q++)
        {
            if(*p>*q)
            {
                *p=*p + *q;
                *q=*p - *q;
                *p=*p - *q;
            }

        }
    }

    for(i=0;i<n;i++,t++)
    {
        printf("%f",*t);
        printf("\n");
    }

  free(t);
  free(p);
  free (q);
             return 0;


}
