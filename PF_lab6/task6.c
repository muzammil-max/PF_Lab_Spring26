#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int product;
	printf("Enter the number of the table you need to print: ");
	scanf("%d", &n);
	for (int i = 1; i <= 10; i++) {
		product = n * i;
		printf("\n %d x %d = %d \n ", n, i, product);
	}
}