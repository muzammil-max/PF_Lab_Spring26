#include <stdio.h>
int main() {
    long long correctCard = 123456789012;
    int correctPin = 5566;
    double accountBalance = 15000.50;
    long long inputCard;
    int inputPin;
    double withdrawAmount;
    printf("--- ATM Authentication System ---\n");
    printf("Enter 12-digit Card Number: ");
    scanf("%lld", &inputCard);

    if (inputCard == correctCard) {
        printf("Enter 4-digit PIN: ");
        scanf("%d", &inputPin);

        if (inputPin == correctPin) {
            printf("Current Balance: Rs. %.2f\n", accountBalance);
            printf("Enter Amount to Withdraw: ");
            scanf("%lf", &withdrawAmount);
            if (withdrawAmount > 0 && withdrawAmount <= accountBalance) {
                accountBalance -= withdrawAmount;
                printf("\nTransaction Successful!\n");
                printf("Remaining Balance: Rs. %.2f\n", accountBalance);
            }
            else if (withdrawAmount > accountBalance) {
                printf("\nError: Insufficient Funds.\n");
            }
            else {
                printf("\nError: Invalid amount entered.\n");
            }
        } else {
            printf("\nError: Invalid PIN.\n");
        }
    } else {
        printf("\nError: Invalid Card Number.\n");
    }
    printf("--------------------------------\n");
    printf("Thank you for using our ATM.\n");
}