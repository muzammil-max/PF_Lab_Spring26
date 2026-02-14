#include <stdio.h>
int main() {

int amount;
int finalamount;
printf("Enter total purchase amount: ");
scanf("%d",&amount);

if(amount >= 5000) {
	printf("20%% discount applied ! \n");
	finalamount = amount - (amount * (20.0/100.0));
	printf("Your amount is: %d",finalamount);
	
} else if (amount >= 3000 && amount <=5000){
	printf("10%% discount applied ! \n");
	finalamount = amount - (amount * (10.0/100.0));
	printf("Your amount is: %d",finalamount);
} else {
	printf("No discount!");
}
}