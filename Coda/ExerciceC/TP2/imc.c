#include <stdio.h>
int main() {
    float height;
    printf("What is your height ?\n");
    scanf("%f", &height);

    float weight;
    printf("What is your weight ?\n");
    scanf("%f", &weight);

    float bmi = weight / (height * height);

    if (bmi > 15 && bmi < 18.5){
    printf("Your body mass index is %f, it indicates you are thin.", bmi);

    }

    else if (bmi >= 18.5 && bmi <= 25){
        printf("Your body mass index is %f, it indicates you have a normal weight.", bmi);
    
    }

    else if (bmi > 25 && bmi < 30){
        printf("Your body mass index is %f, it indicates you have an excess of weight.", bmi);
    }

    else
    printf ("Your body mass indicates is %f, it indicates you are obese.", bmi);

    return 0;

}