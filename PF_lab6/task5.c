#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float temp = 0;
	while (temp != -999.0) {
		printf("\n Enter the temperature value: ");
		scanf("%f", &temp);
		if (temp != -999.0) {
			printf("Recorded!");
		}
	}
}