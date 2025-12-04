#include<stdio.h>
#include<conio.h>

void main() {

    long int total_population = 1441981744;
    float women_percent = 48.4;
    float men_percent = 100.0 - women_percent;

    float men_literacy = 80.95;
    float women_literacy = 62.84;

    long int total_women = (total_population * women_percent) / 100;
    long int total_men = total_population - total_women;

    long int literate_men = (total_men * men_literacy) / 100;
    long int literate_women = (total_women * women_literacy) / 100;


    long int illiterate_men = total_men - literate_men;
    long int illiterate_women = total_women - literate_women;
    clrscr();
    
    printf("Total Population: %ld\n", total_population);
    printf("Total Men: %ld\n", total_men);
    printf("Total Women: %ld\n", total_women);

    printf("Illiterate Men: %ld\n", illiterate_men);
    printf("Illiterate Women: %ld\n", illiterate_women);

     getch();
     }





