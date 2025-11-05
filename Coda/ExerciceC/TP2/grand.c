#include <stdio.h>
int main ()
{
    int numbers[10]={4 , 5 , 1 , 10 , 32 , 0 , 9 , 14 , 23 , 2};
    int max = numbers[0];

    for (int i = 0; i < 10 ; i++)
    {
        if (max < numbers[i])
        {
            max = numbers[i];
        }       
    }

    printf("The max number on the list is %d.\n" , max);

    return 0;

}