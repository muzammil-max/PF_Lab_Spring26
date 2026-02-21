#include <stdio.h>
int main() {
    int service;
    printf("How many years you served in this company \n");
    scanf("%d",&service);
    int salary;
    printf("Enter the  salary\n");
    scanf("%d",&salary);
    int give;

    give=(service > 15)? (0.35 * salary):
        (service > 7 && service <=15)? (0.2 * salary):
                                       (0.05 * salary);

    printf("Incentive amount: %d",give);
}