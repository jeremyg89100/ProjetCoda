#include <stdio.h>
#include <string.h>

int main()
{
    int hour_day;
    int day;
    int months;

    printf("What is the day ? Respond with a number between 0 and 6 : \n");
    scanf("%d", &day );
    switch(day){
        case 0:
            printf("Monday\n");
            break;

        case 1:
            printf("Tuesday\n");
            break;
        
        case 2:
            printf("Wednesday\n");
            break;
            
        case 3:
            printf("Thursday\n");
            break;
            
        case 4:
            printf ("Friday\n");
            break;
            
        case 5:
            printf("Saturday\n");
            break;
            
        case 6:
            printf("Sunday\n");
            break;
}

    char week_end[30];
{
        if (day == 5 || day == 6)
            strcpy (week_end , "week-end");
}

    printf("What is the hour of the day between 0 and 23 ? ");
    scanf("%d", &hour_day);

    char hour_in_day[50];
{
        if (hour_day >= 6 && hour_day <= 12){
            printf("Morning \n");
            strcpy(hour_in_day, "Morning");
    }
        else if (hour_day >= 13 && hour_day <= 19){
            printf("Afternoon \n");
            strcpy(hour_in_day, "Afternoon");
    }

        else if (hour_day >= 20 && hour_day <= 23 || hour_day < 6){
            printf("Night\n");
            strcpy (hour_in_day , "Night");
    }
}

    printf("What is the month of the year ? Respond with a number between 0 and 11. ");
    scanf("%d", &months);

    char seasons[30];


        if (months >= 11 && months <= 2 )
        {
            strcpy (seasons, "Winter");
        }   

        else if (months >= 3 && months <= 4)
        {
            strcpy (seasons , "Printemps");
        }

        else if (months >= 5 && months <= 7)
        {
            strcpy (seasons , "Summer");
        }

        else if (months >= 8 && months <= 10)
        {
            strcpy (seasons ,"Fall");
        }

    printf("It's the %s in %s %s ", hour_in_day , seasons , week_end );

      return 0;

}