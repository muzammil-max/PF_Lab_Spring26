#include <stdio.h>
int main() {


int x;
printf("Enter attendance percentage \n");
scanf("%d",&x);

if(x >= 75) {
    printf("Selected for tournament");

} else{
    printf("Not Selected for tournament");
}
}