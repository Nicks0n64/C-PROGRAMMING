/*NICKSON MUSEE
CT101/G/26525/25
06/11/2025*/
#include <stdio.h>

int main() {
    float height; 
    
    double bank_balance; 
    
    long long phone_number; 
    
    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    printf("Enter your bank balance (in Ksh): ");
    scanf("%lf", &bank_balance);

    printf("Enter your phone number: ");
    scanf("%lld", &phone_number);

    printf("\n----- User Details -----\n");
    printf("Height: %.2f meters\n", height);
    printf("Bank Balance: Ksh %.2lf\n", bank_balance);
    printf("Phone Number: %lld\n", phone_number);

    return 0; 
}