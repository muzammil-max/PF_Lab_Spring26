#include <stdio.h>
int main() {
    printf("Enter User name and pass: \n");
    char userInput[4];
    scanf("%s",&userInput);
    int userPass;
    scanf("%d",&userPass);
    if ((userInput[0] == 'U' && userInput[1] == 'S' && userInput[2] == 'E' && userInput[3] == 'R' && (userPass == 123))) {
        printf("Connected");
    } else if ((userInput == "User") || (userPass != 123)){
        printf("Not Connected");
    } else{
        printf("Not Connected");
    }
}