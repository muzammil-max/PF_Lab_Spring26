#include <stdio.h>
// 1)Write a C program that takes 5 integers in an array and shifts all elements one position to the right, and moves the
// last element to the first position.
// Example:
// Input → 1 2 3 4 5
// Output → 5 1 2 3 4

int main() {
    int myarr[5] = {1,2,3,4,5};
    int arr2[5]={};
    int state = 0;
    int position = 4;

    for (int i = 0; i <= 4; i++) {
        if (i == 0) {
           arr2[i] = myarr[i+4];

       }  else {
           arr2[i] = myarr[i-1];
       }
    }
    for (int x = 0;x <=4;x++)
    printf("%d",arr2[x]);

}