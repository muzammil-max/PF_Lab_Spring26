#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int choice;
	int seats = 3;
	printf("--Welcome to Bus booking system--\n");
	printf("\nEnter 1 to reserve and 0 to exit : ");
	scanf("%d", &choice);
	while (choice != 0) {
		if (choice == 1 && seats != 0) {
			seats--;
			printf("\nOne seat reserved!\n");
			printf("Seats remaining: %d", seats);
		}
		else if (choice == 1 && seats == 0) {
			printf("\nSeats are full!");
		}
		printf("\nDo you want to reserve again?\n");
		printf("\nEnter 1 to reserve and 0 to exit : ");
		scanf("%d", &choice);
	}

	printf("\n Thankyou for using our service!");
}