#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int N, total = 0;
    printf("Enter the number of boxes: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        total = total + i;
    }
    printf("Total decorative items required: %d\n", total);
}