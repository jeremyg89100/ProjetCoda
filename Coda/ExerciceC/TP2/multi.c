#include <stdio.h>
int main()
{
    int number;
    int result;
    printf("Enter a number : ");
    scanf("%d", &number);

    for (int i = 0 ; i <= number ; i++ )
    {
        for (int j = 0 ; j < 11 ; j++)
        {
            result = i * j;
            printf("%d x %d = %d\n", i , j , result);
        }
        
    }

    return 0;
}