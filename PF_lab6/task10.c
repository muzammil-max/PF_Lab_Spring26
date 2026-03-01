#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int score = 0;
    char flag = 'T';
    int distinction = 0, pass = 0, fail = 0;
    printf("Enter student scores (0-100). Enter -1 to finish:\n");
    while (flag == 'T') {
        printf("Score: ");
        scanf("%d", &score);
        if (score == -1) {
            flag = 'F';
            break;
        }
        if (score >= 75 && score <= 100) {
            distinction++;
        }
        else if (score >= 50 && score < 75) {
            pass++;
        }
        else if (score >= 0 && score < 50) {
            fail++;
        }
        else {
            printf("Invalid score! Please enter a value between 0 and 100.\n");
        }
    }
    printf("\n===Analysis Results===\n");
    printf("Distinction (>= 75): %d\n", distinction);
    printf("Pass (50-74): %d\n", pass);
    printf("Fail (< 50): %d\n", fail);
}