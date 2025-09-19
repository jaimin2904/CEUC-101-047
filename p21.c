#include<stdio.h>
 int main()
{
    int str[25];
    int p=0,n=0,o=0,e=0,i,j;
    for(i=0;i<5;i++)
    {
      scanf("%d",&str[i]);
    }
    for(j=0;j<25;j++)
    {
        if(str[j]>0)
        {
            p=p+1;
        }
        else
           {
            n++;}
    }
        for(j=0;j<25;j++)
        {

               if(str[j]%2==0)

         {

           e++;
         }
       else
       {


        o++;
       } }


    printf("%d\n",p);
    printf("%d\n",n);
    printf("%d\n",o);
    printf("%d\n",e);
    return 0;
}
