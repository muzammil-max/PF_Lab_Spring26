#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int select;
	int n1 = 0;
	int n2 = 0;
	int result = 0;
	char flag = 'T';
	do {
		printf("\n==WELCOME TO BASIC CALCULATOR==\n");
		printf("1-Addition\n");
		printf("2-Subraction\n");
		printf("0-Exit\n");
		printf("PRESS 1 FOR ADDITION AND 2 FOR SUBRACTION: ");
		scanf("%d", &select);
		if (select != 1 && select != 2 && select != 0) {
			printf("\n Please enter a valid choice.\n");
		}
		else if (select == 0) {
			flag = 'F';
		}
		else {
		printf("\n Number 1: ");
		scanf("%d", &n1);
		printf("\n Number 2: ");
		scanf("%d", &n2);

		}


		if (select == 1 && flag == 'T') {
			result = n1 + n2;
			printf("\n Result: %d", result);
		}
		else if (select == 2 && flag == 'T') {
			result = n1 - n2;
			printf("\n Result: %d", result);
		}
		//else if (select != 1 && select != 2 && select != 0) {
		//	printf("\n Please enter a valid choice.\n");
		//}
	} while (select != 0);

	//return 0;

}

