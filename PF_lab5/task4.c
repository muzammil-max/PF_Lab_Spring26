#include <stdio.h>
int main() {
    int category, subCategory, quantity;
    int price = 0;
    char bookName[20];
    printf("--- Online Bookstore Menu ---\n");
    printf("1. Fiction\n2. Non-Fiction\n");
    printf("Select Category (1-2): ");
    scanf("%d", &category);
    switch (category) {
        case 1:
            printf("\n--- Fiction Sub-categories ---\n");
            printf("1. Novel (Rs. 600)\n2. Comic (Rs. 300)\n");
            printf("Select Book: ");
            scanf("%d", &subCategory);
            switch (subCategory) {
                case 1:
                    price = 600;
                    printf("\nSelected: Novel\n");
                    break;
                case 2:
                    price = 300;
                    printf("\nSelected: Comic\n");
                    break;
                default:
                    printf("Invalid Sub-category!\n");
                    return 0;
            }
            break;
        case 2:
            printf("\n--- Non-Fiction Sub-categories ---\n");
            printf("1. Biography (Rs. 800)\n2. Self-Help (Rs. 500)\n");
            printf("Select Book: ");
            scanf("%d", &subCategory);

            switch (subCategory) {
                case 1:
                    price = 800;
                    printf("\nSelected: Biography\n");
                    break;
                case 2:
                    price = 500;
                    printf("\nSelected: Self-Help\n");
                    break;
                default:
                    printf("Invalid Sub-category!\n");
                    return 0;
            }
            break;
        default:
            printf("Invalid Category Choice!\n");
            return 0;
    }
    printf("Enter Quantity: ");
    scanf("%d", &quantity);
    int totalBill = price * quantity;
    printf("\n--------------------------\n");
    printf("FINAL BILL\n");
    printf("Price per unit: Rs. %d\n", price);
    printf("Quantity:       %d\n", quantity);
    printf("Total Amount:   Rs. %d\n", totalBill);
    printf("--------------------------\n");
    return 0;
}