// 2)Write a program that reads the 10 numbers from user and store these numbers into an array of same size. You
// program should provide a searching mechanism in such a way that how many times a particular number occurred
// and then print it on screen. If number is not in array, then program should display a message “number not found”.


#include <stdio.h>
int main() {
    int myarr[10];
    int find = 4; //the value i want to find.
    int found = 0;
    int repeat = 0;

    for (int i =0; i <=9;i++) {
        printf("\n Enter the value : ");
        scanf("%d",&myarr[i]);
    }

    for (int x =0; x <=9;x++) {
        if (myarr[x] == find) {
            found =1;
            repeat++;

        }
    }

    if (found ==1) {
        printf("\nValue found at array %d times",repeat);
    }
}