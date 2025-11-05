#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main ()
{
    srand(time(NULL));
    int mystery_number = rand()%1001;
    int guess;
    int compteur = 0;
    printf("Guess a number between 1 and 1000 : ");
    scanf("%d", &guess);

    while (guess != mystery_number)
    {
        if (guess < mystery_number)
        {
            printf("Up.\n");
            compteur ++;
            printf("Guess a number between 1 and 1000 : ");
            scanf("%d", &guess);
        }
        else 
        {
            printf("Down.\n");
            compteur ++;
            printf("Guess a number between 1 and 1000 : ");
            scanf("%d",&guess);
        }
    }

    if (guess = mystery_number)
    {
        printf("You win in %d attempt(s) ! The mystery number was %d !\n",compteur , mystery_number);
    }
return 0;

}

