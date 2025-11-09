/*NICKSON MUSEE
CT101/G/26525/25
06/11/2025*/
#include <stdio.h>

int main() {
    int choice;

    printf("Mobile Data Bundle Menu:\n");
    printf("1. 100 MB - 50 KES\n");
    printf("2. 500 MB - 200 KES\n");
    printf("3. 1 GB. - 350 KES\n");
    printf("4. 2 GB. - 600 KES\n");

    printf(     "\Enter prefered option (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\nYou selected 100 MB bundle - Cost: 50 KES\n");
            break;
        case 2:
            printf("\nYou selected 500 MB bundle - Cost: 200 KES\n");
            break;
        case 3:
            printf("\nYou selected 1 GB bundle - Cost: 350 KES\n");
            break;
        case 4:
            printf("\nYou selected 2 GB bundle - Cost: 600 KES\n");
            break;
        default:
            printf("\nInvalid choice.\n");
    }

    return 0;
}