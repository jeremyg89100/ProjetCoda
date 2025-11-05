#include <stdio.h>
#include <math.h>
int main ()
{   float result = 0;
    int numbers[5] = {3 , 6 , 8 , 16 , 18};
    printf(numbers[1]);
    result = (numbers[1] + numbers[2] + numbers[3] + numbers[4] + numbers[5]) / 5;

    printf("%f\n", result);

    return 0;

}