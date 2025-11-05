#include <stdio.h>
int main ()
{
    float number1;
    float number2;
    int operation;
    float result;

    printf("Enter a number : ");
    scanf("%f", &number1);
    printf("Enter a second number : ");
    scanf("%f", &number2);
    printf("Veuillez rentrer une opération : \n1. Addition\n2. Soustraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &operation);

    if(operation == 1)
    {
        result = number1 + number2;
        printf("%.2f",result);
    }

    else if(operation == 2)
    {
        result = number1 - number2;
        printf("%.2f", result);
    }

    else if (operation == 3)
    {
        result = number1 * number2;
        printf("%.2f", result);
    }

    else if(operation == 4)
    {
        if (number2 == 0)
        {
        printf("Division impossible par 0 !\n");
        return 0;
        }

        else (result = number1 / number2);
        printf("%.2f\n",result);
    }


    return 0;
}