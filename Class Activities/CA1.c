#include<stdio.h>
int main (void)
{
    float weight;
    float hight;
    float bmi;
    printf("Enter your weight in kilograms\n");
    printf("Enter your hight in meters\n");
    scanf("%f%f",& weight,& hight);
    bmi=(weight/(hight*hight));
    if (bmi<18.5){
        printf("Under weight");
    }
    else if (bmi>=18.5 && bmi<25){
        printf("Normal");
    }
    else if (bmi>=25 && bmi<30){
        printf("Over weight");
    }
    else if (bmi>=30){
        printf("Obese");
    }
    return 0;
}