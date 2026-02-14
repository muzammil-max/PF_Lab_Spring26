#include <stdio.h>
int main() {

int urdumarks;
int engmarks;
int mathmarks;
int chemistrymarks;
int physicsmarks;
int sum;
int percentage;
printf("Please enter the marks for urdu: ");
scanf("%d",&urdumarks);	
printf("\n Please enter the marks for English: ");
scanf("%d",&engmarks);	
printf("\n Please enter the marks for Math: ");
scanf("%d",&mathmarks);	
printf("\n Please enter the marks for Chemistry: ");
scanf("%d",&chemistrymarks);	
printf("\n Please enter the marks for Physics:  ");
scanf("%d",&physicsmarks);	


sum = urdumarks + engmarks + mathmarks + chemistrymarks + physicsmarks;
percentage = (sum/500.0) * 100.0;

if (percentage >= 85) {
	printf("\n Full scholarship");
} else if (percentage >= 70 && percentage <85) {
	printf(" \n Partial Scholarship");
} else if (percentage >=50 && percentage < 70) {
	printf("\n Can apply for consideration");
} else {
	printf("\n Not eligible for consideration");
}

printf("\n Your percentage is: %d \n",percentage);
printf("\n Your total marks is: %d \n",sum);
	
}