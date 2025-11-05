#include <stdio.h>
int main ()
{
    int factorielle;
    int result = 1;

    printf("Enter a number : ");
    scanf("%d", &factorielle);

    for (int i = 0 ; i < factorielle ; i++ )
    {
        result = result * (i+1);
    }

    printf("%d\n", result);

    return 0;

}