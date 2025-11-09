/*NICKSON MUSEE
CT101/G/26525/25
06/11/2025*/
#include<stdio.h>

int main() {
    int units;
    float totalBill;

    printf("Enter water units consumed: ");
    scanf("%d", &units);

    if (units <= 30)
        totalBill = units * 20;
    else if (units <= 60)
        totalBill = units * 25;
    else
        totalBill = units * 30;

    printf("Total water bill: %.2f KES\n", totalBill);

    return 0;
}