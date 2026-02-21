#include <stdio.h>

int main() {
    int fitness_score;
    int age;
    printf("Enter your fitness score: ");
    scanf("%d",&fitness_score);
    printf("\n");
    printf("Enter your age: ");
    scanf("%d",&age);

    if(fitness_score >=85) {
        if(age <25) {
            printf("40%% discount");
        } else {
            printf("25%% discount");
        }
    } else{
        if(fitness_score >=70 && age <30) {
            printf("15%% discount");
        }
        else{
            printf("No discount");
        }
    }
}