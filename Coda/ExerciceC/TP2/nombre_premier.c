#include <stdio.h>
int first(int a)
{
    for (int i = 2 ; i < a ; i++)
    {
        if (a % i != 0)
        {
            return 0;
        }
    
    else
        {
            return 1;
        }
    }
return 0;
}
int main()
{
    int prime_number;
    printf("Enter a number : ");
    scanf("%d", &prime_number);

    int result = first(prime_number);
    printf("%d\n", result);

return 0;
}