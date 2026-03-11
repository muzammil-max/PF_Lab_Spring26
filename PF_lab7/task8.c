#include <stdio.h>
int main() {
    char strimg[100];
    printf("Enter characters (non alphabets): ");
    scanf("%[^A-Za-z]", strimg);
    printf("Stored characters: %s", strimg);

}