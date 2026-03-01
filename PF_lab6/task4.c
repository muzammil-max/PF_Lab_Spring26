#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	int sum = 0;
	printf("Enter the value of n: ");
	scanf("%d", &num);
	printf("Sum of first natural numbers: ");
	for (int i = 0; i <= num; i++) {
		sum = sum + i;
		printf("%d ", sum);
	}
}