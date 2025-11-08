#include<stdio.h>
struct book{
             int no;
             char title[5];
             char author[5];
             float price;
             int status;
           };

           int main()
           {
               struct book b[5];
               int n,i;
               printf("enter number of books:");
               scanf("%d",&n);
               for(i=0;i<n;i++)

               {
                   printf("enter details of book %d\n",i+1);
                   printf("No:");
                   scanf("%d",&b[i].no);

                   printf("title:");
                    scanf(" %[^\n]", b[i].title);

                   printf("author:");
                   scanf(" %[^\n]", b[i].author);

                   printf("price:");
                   scanf("%f",&b[i].price);

                   printf("status:");
                   scanf("%d", &b[i].status);


               }
                 for(i=0;i<n;i++)
                 {
                     printf("\n---books Details---\n");
                     printf("\nbook no:%d\n",b[i].no);
                     printf("title:%s\n",b[i].title);
                     printf("author:%s\n",b[i].author);
                     printf("price:%f\n",b[i].price);

                   if(b[i].status==1)
                     printf("status issued\n");

                  else
                        printf("status available\n");


                 }
             printf("\n");

                      return 0;
           }

