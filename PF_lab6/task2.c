#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int newBal = 5000;
	int withdraw;
	

	while (newBal > 0 && newBal != 0) {
		printf("Enter amount to withdraw: ");
		scanf("%d", &withdraw);
		printf("\n");

		newBal -= withdraw;
		printf("New balance is: %d \n", newBal);
	}

	printf("Your balance has been exhausted:  %d", newBal);



}