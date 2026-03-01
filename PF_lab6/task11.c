#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float price, totalBill = 0.0, finalAmount;
       int choice;

    do {
        printf("Enter the price of the product: ");
        scanf("%f", &price);
        totalBill += price;

        printf("Add another product? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);
        if (choice!= 1) {
            choice = 0;
        }

    } while (choice == 1);

    finalAmount = totalBill;

    if (totalBill > 5000) {
        finalAmount = totalBill * 0.95;
        printf("\nDiscount Applied: 5%% off for orders over 5000\n");
    }

    printf("Total Bill: %.2f\n", totalBill);
    printf("Final Payable Amount: %.2f\n", finalAmount);

}