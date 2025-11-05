#include <stdio.h>
int main() {
    float price;
    printf("Price of your object : \n");
    scanf("%f", &price);

    float taxes = 1.2;
    float price_taxes = price * taxes;

    printf("The price after taxes is %.2f \n", price_taxes);

    return 0;
    
}