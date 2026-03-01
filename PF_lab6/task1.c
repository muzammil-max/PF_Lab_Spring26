#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int isPresent;
	int a = 0;
	int p = 0;

	for (int i = 1; i <= 30; i++) {
		printf("Please enter the attendance for the student %d (0 for present and 1 for absent\n",i);
		scanf("%d",&isPresent);

		if (isPresent == 1) {
			p++;

		}
		else if (isPresent == 0) {
			a++;
		}


	}

	printf("Number of student present: %d \n", p);
	printf("Number of student absent: %d", a);

		 
}		 