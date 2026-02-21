#include <stdio.h>
int main() {
    int data;
    int customertype;
    int amount;
    //0 means prepaid and 1 mean postpaid
    printf("--Welcome to Mobile Data bill--\n");
    printf("Press 0 for postpaid and press 1 for prepaid: ");
    scanf("%d",&customertype);
    printf("Please enter data needed: ");
    scanf("%d",&data);
    if(data <= 2) {
        amount = 50 * data;
        printf("Your amount for %d GB data is: %d",data,amount);
    } else if (data >2 && data <= 10){
        if(customertype == 0){
            amount = 40 * data;
            printf("Your amount for %d GB data is: %d",data,amount);
        } else{
            amount = 35 * data;
            printf("Your amount for %d GB data is: %d",data,amount);
        }
    } else if(data>10){
        amount = 25 * data;
        printf("Your amount for %d GB data is: %d",data,amount);
    }
}