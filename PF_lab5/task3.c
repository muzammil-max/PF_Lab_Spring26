#include <stdio.h>
int main() {
    int luggage;
    int size;
    int weight;
    int luggagetype;
    int amount=0;
    printf("\n Welcome to luggage calculator\n");
    printf("1- Handbag\n");
    printf("2- CheckedBag \n");
    printf("3- Sports Equipment\n");
    scanf("%d",&luggage);
    printf("Enter the weight of your luggage.");
    scanf("%d",&weight);
    switch(luggage) {
        case 1:
            printf("\n Enter the siZe for bag\n");
            printf("1- Small\n");
            printf("2- Large \n");
            scanf("%d",&size);
            switch(size){
                case 1:
                    amount = 100 * weight;
                    printf("Your amount is: %d",amount);
                    break;
                case 2:
                    amount = 200 * weight;
                    printf("Your amount is: %d",amount);
                    break;
            }
            break;
        case 2:
            printf("\n Enter the checkedbag type\n");
            printf("1- Domestic\n");
            printf("2- International \n");
            scanf("%d",&luggagetype);
            switch(luggagetype) {
                case 1:
                    amount = 300 * weight;
                    printf("Your amount is: %d",amount);
                    break;
                case 2:
                    amount = 500 * weight;
                    printf("Your amount is: %d",amount);
                    break;
            }
            break;
        case 3:
            amount = 1000*weight;
            printf("Your amount is: %d",amount);
            break;
        default :
            printf("Please make a valid selection");
    }
}