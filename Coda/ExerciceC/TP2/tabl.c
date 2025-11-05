#include <stdio.h>
#include <stdint.h>

int main()
{
    int numbers[5]= { 10 , 11 , 14 , 17 , 15};
    float result = 0;

    for (int i; i < 5; i++)
    {
        result += numbers[i];        
    }
    printf("%.2f\n", result / 5);
    
    return 0;
}