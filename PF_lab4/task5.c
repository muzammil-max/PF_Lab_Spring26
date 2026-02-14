#include <stdio.h>
int main() {
    int balance = 100;
    int withdrawMoney = 0;
    int DepMoney = 0;
    int option;
    int Userbalance;
    int UserwithdrawMoney;
    int UserDepMoney;
    printf("Welcome to Banking System \n");
    printf("1- Balance Inquiry \n");
    printf("2- Deposit Money \n");
    printf("3- Withdraw Money \n");
    printf("0- Exit \n");
    printf("Select what operation you wanna do \n");
    scanf("%d",&option);
    switch(option) {
        case 1:
            printf("Your account balance is: ");
            printf("%d",balance);
            break;
        case 2:
            printf("How much amount to add ? ");
            scanf("%d",&UserDepMoney);
            printf("Amount added! \n");
            balance = balance + UserDepMoney;
            printf("Your new amount is: ");
            printf("%d",balance);
            break;
        case 3:
            if (UserwithdrawMoney <= balance){
                printf("How much money you want to withdraw ?");
                scanf("%d",&UserwithdrawMoney);
                balance -= UserwithdrawMoney;
                printf("Your new amount is: ");
                printf("%d",balance);
            }else {
                printf("Withdraw amount is too high!");
            }
            break;
        case 0:
            printf("Thankyou for using our Bank services");
            break;
        default:
            printf("Select Valid Operation");
    }
}