#include<stdio.h>
#include<string.h>
struct team
{
    char team_name[10];
    char sport_type[10];

        struct coach
        {
            char coach_name[10];
            int age;
            int exp;

        }c[2];
}t[2];

void main()
{   int ch,n=0;
    char key[50];
    do
    {
        printf("\n 1.add\n 2.search\n 3.display\n 4.exit\n enter choice:");
        scanf("%d",&ch);

        if(ch==1)
        {
            printf("--- enter detali---\n");

        printf("enter team name :");
        gets(t[n].team_name);

        printf("\nenter sport type:");
        gets(t[n].sport_type);

        printf("\n----enter coach details---\n");
        printf("coach name:");
        gets(t[n].c[n].coach_name);

        printf("age:");
        scanf("%d",&t[n].c[n].age);

        printf("exp:");
        scanf("%d",&t[n].c[n].exp);

        n++;
        }

        else if(ch==2)
        {
            printf("---search parts---\n");
            printf("search team/spoet:");
            scanf("%s",&key);
            //gets(key);

           for(int i=0;i<n;i++)
           {
               if(!strcmp(t[i].team_name,key) || !strcmp(t[i].sport_type,key))
               {
                   printf("\nteam:%S sport:%s coach:%s age:%d exp:%d\n",t[i].team_name,t[i].sport_type,t[i].c[i].coach_name,t[i].c[i].age,t[i].c[i].exp);
               }


           }

        }

       else if(ch==3)
       {
          printf("---display data---\n");


       printf("\n");
        for(int i=0;i<n;i++)
        {
            printf("team name:");

            for(int j=0 ; j<10 ; j++)
            {
            printf("%c",t[i].team_name[j]);
            }
             printf("\n");

             printf("sport type:");
             for(int j=0 ; j<10 ; j++)
             {

            printf("%c",t[i].sport_type[j]);
             }
             printf("\n");

             printf("coach name:");
              for(int j=0 ; j<10 ; j++)
              {

            printf("%c",t[i].c[i].coach_name[j]);
              }
              printf("\n");
            printf("age:");
            printf("%d",t[i].c[i].age);
            printf("\n");
            printf("ext:");
            printf("%d",t[i].c[i].exp);
            printf("\n\n");

        }
       }
            }
            while(ch!=4);

    getch();
}



