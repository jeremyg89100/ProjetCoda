#include <stdio.h>
int facto(factorielle)
{
    int result = 1;
    for (int i = 1 ; i <= factorielle ; i++)
    {
        return result = result * i;
    }

}

int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

    int resultat = facto(number);
    printf("%d\n", resultat);
}