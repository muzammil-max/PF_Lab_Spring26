// 5)Write a program that reads 10 integers into an array.
// Finds and prints the difference (max - min) between the largest and smallest elements.


#include <stdio.h>
int main() {
    int b1[10];
    int large = 0;
    int small = 999;

    for (int i =0; i <=9;i++) {
        printf("\nEnter the values for number %d: ",i+1);
        scanf("%d",&b1[i]);
    }

    for (int x =0;x <=9;x++) {
        if (b1[x] > large) {
            large = b1[x];

        }else if (b1[x] <small){
            small = b1[x];
        }
    }
    printf("%d",large);
    printf("%d",small);
    printf("\nDifference between minumum and max is: %d",large-small);

}