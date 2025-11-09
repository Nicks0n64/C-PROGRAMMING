/*NICKSON MUSEE
CT101/G/26525/25
06/11/2025*/
#include <stdio.h>

int main() {
    float attendance, averageMarks;

    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);
    printf("Enter average marks: ");
    scanf("%f", &averageMarks);

    if (attendance >= 75 && averageMarks >= 40)
        printf("\nEligible for final exams.\n");
    else
        printf("\nNot eligible.\n");

    return 0;
}