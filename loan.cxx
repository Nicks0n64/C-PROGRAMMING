/*NICKSON MUSEE
CT101/G/26525/25
06/11/2025*/
#include <stdio.h>

int main() {
    int age;
    float income;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your annual income (in Sh): ");
    scanf("%f", &income);

    if (age >= 21 && income >= 21000)
        printf("\nYou qualify for a loan.\n");
    else
        printf("\nUnable to offer you a loan at this time.\n");

    return 0;
}