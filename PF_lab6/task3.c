#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int pass = 1234;
	int userpass;

	do {
		printf("\nPlease enter the password: ");
		scanf("%d", &userpass);

		if (userpass != pass) {
			printf("Wrong password, please try again! \n");
		}



	} while (userpass != pass);

	printf("You entered the right password!");
}