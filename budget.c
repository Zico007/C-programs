#include <stdio.h>

void main(){
    float amount, amount_per_day, days;

    printf("How much do you have ?\n");
    scanf("%f",&amount);
    printf("How much do you want to spend per day ?\n");
    scanf("%f",&amount_per_day);

    days = amount / amount_per_day;

    printf("Your money will last for about %.2f days",days);
}
