#include <stdio.h>

int main() {
    float revenue[7], total = 0, average;
    
    printf("=== Weekly Revenue Tracker ===\n");
    
    for (int i = 0; i < 7; i++) {
        printf("Enter revenue for Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    average = total / 
    printf("\nTotal Weekly Revenue: %.2f\n", total);
    printf("Average Daily Revenue: %.2f\n", average);

    return 0;
}