#include <stdio.h>
int main() {

    int bal;
    printf("Enter ur balance ");
    scanf("%d",&bal);

    if(bal > 0) {
        printf("Positive");
    }else if(bal ==0) {
        printf("Zeo Balance");
    } else{
        printf("Overdrawn");
    }

}