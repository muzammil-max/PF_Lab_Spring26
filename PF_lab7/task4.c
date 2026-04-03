#include <stdio.h>
int main() {
    char mystr[999]={};
    printf("Enter any sentuence or word: ");
    scanf(" %[^\n]", mystr);

    for (int i = 0; i <=998;i++) {
        if (mystr[i] >='A' && mystr[i] <= 'Z') {
            mystr[i] +=32; //+32 make it smallerr
        } else if (mystr[i] >= 'a'&& mystr[i] <= 'z') {
            mystr[i] -=32; //-32 make it capital
        }
    }
    for (int x = 0; x <=998 ;x++) {
        if (mystr[x] != 0)
        printf("%c",mystr[x]);
    }
}