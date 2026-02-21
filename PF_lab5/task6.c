#include <stdio.h>

int main() {
    float s1, s2, s3, s4;

    printf("--- Quadrilateral Type Identifier --\n");
    printf("Enter the four side lengths: ");
    scanf("%f %f %f %f", &s1, &s2, &s3, &s4);

    if (s1 <= 0 || s2 <= 0 || s3 <= 0 || s4 <= 0) {
        printf("\nError: All sides must be greater than zero. Not a valid quadrilateral.\n");
    }
    else {
        if (s1 == s2 && s2 == s3 && s3 == s4) {
            printf("\nResult: All sides are equal. This is a Square.\n");
        }
        else {
            if (s1 == s3 && s2 == s4) {
                printf("\nResult: Opposite sides are equal. This is a Rectangle.\n");
            }
            else {
                printf("\nResult: This is a General Quadrilateral.\n");
            }
        }
    }
}