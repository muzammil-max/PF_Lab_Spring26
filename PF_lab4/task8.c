#include <stdio.h>
#include <math.h>
int main(){
	
	int choice;
	int num1;
	int num2;
	int result;
	
	printf("Welcome to Calculator\n");
	printf("\n1- Addition");
	printf("\n2- Subraction");
	printf("\n3- Multiplication");
	printf("\n4- Division");
	printf("\n5- Square");
	printf("\n6- Cube");
	printf("\n7- Square Root");
	printf("\n8- Power (xʸ)");
	printf("\n9- Absolute Value");
	printf("\n10- Modulus Value\n");
	printf("\nPlease select what operation you want to peform: ");
	scanf("%d",&choice);
	
	switch(choice){
		
		case 1:
			printf("You selected addition \n");
			printf("Enter the number 01: ");
			scanf("%d",&num1);
			printf("\n Enter the number 02: ");
			scanf("%d",&num2);
			result = num1 + num2;
			printf("Result is: %d",result);
			break;
		case 2:
			printf("You selected Subraction \n");
			printf("Enter the number 01: ");
			scanf("%d",&num1);
			printf("\nEnter the number 02: ");
			scanf("%d",&num2);		
			result = num1 - num2;
			printf("\nResult is: %d",result);
			break;

		case 3:
			printf("You selected Multiplication \n");
			printf("Enter the number 01: ");
			scanf("%d",&num1);
			printf("Enter the number 02: ");
			scanf("%d",&num2);
			result = num1 * num2;
			printf("Result is: %d",result);
			break;
		case 4:
			
			printf("You selected Division \n");
			printf("Enter the number 01: ");
			scanf("%d",&num1);
			printf("Enter the number 02: ");
			scanf("%d",&num2);
			if(num2 != 0) {
			result = num1 / num2;
			printf("Result is: %d",result);
		} else{
			
			printf("\nResult is infinity");

		}
		break;
		case 8:
			printf("You selected Exponent \n");
			printf("Enter the number 01: ");
			scanf("%d",&num1);
			printf("Enter the number 02: ");
			scanf("%d",&num2);
			result = pow(num1,num2);
			printf("Result is: %d",result);
			break;
		case 10:
			
			printf("You selected Modulus \n");
			printf("Enter the number 01: ");
			scanf("%d",&num1);
			printf("Enter the number 02: ");
			scanf("%d",&num2);
			if(num2 !=0){
			result = num1 % num2;
			printf("Result is: %d",result);
		} else{
			printf("\nResult is infinity");
			
		}
		break;
		
		case 5:
			printf("You selected Square \n");
			printf("Enter the number: ");
			scanf("%d",&num1);
			result = num1 * num1;
			printf("Result is: %d",result);
			break;
		case 6:
			printf("You selected Cube \n");
			printf("Enter the number: ");
			scanf("%d",&num1);
			result = num1 * num1 * num1;
			printf("Result is: %d",result);
			break;
		case 7:
			printf("You selected Square root \n");
			printf("Enter the number: ");
			scanf("%d",&num1);
			if(num1 >=0) {
			
			result = sqrt(num1);
			printf("Result is: %d",result);
		} else {
			printf("Result is infinity.");
		}
		break;
	 	case 9:
	 		printf("You selected Abolsute Value \n");
			printf("Enter the number: ");
			scanf("%d",&num1);
			if(num1 >=0){
			printf("Result is: %d",num1);
			} else {
			num1 = -num1;
			printf("Result is: %d",num1);
			}
			break;
		default:
			printf("Please select valid operation!");	 	
	}	
}