#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int guess = 7;
	int myguess = 0;
	printf("\nEnter your guess number: ");
	scanf("%d",&myguess);
	while (myguess != 7) {
		if (myguess > guess) {
			printf("\nToo high");
			printf("\nEnter your guess number: ");
			scanf("%d",&myguess);
		}
		else if (myguess < guess) {
			printf("\nToo low");
			printf("\nEnter your guess number: ");
			scanf("%d",&myguess);
		}
	}
	printf("\nCorrect Guess!");
}