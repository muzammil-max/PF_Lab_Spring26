#include <stdio.h>
#include <math.h>
int main() {
    int choice, gender;
    float weight, height, age, result;
    printf("--- Advanced Health Calculator ---\n");
    printf("1. BMI Calculation\n");
    printf("2. BMR Calculation\n");
    printf("3. Ideal Weight\n");
    printf("4. Heart Rate Zone\n");
    printf("Select Operation: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter weight (kg) and height (m): ");
            scanf("%f %f", &weight, &height);
            if (weight > 0 && height > 0) {
                result = weight / pow(height, 2);
                printf("BMI: %.2f\n", result);
            } else {
                printf("Error: Invalid input.\n");
            }
            break;
        case 2:
            printf("Enter weight (kg), height (cm), and age: ");
            scanf("%f %f %f", &weight, &height, &age);
            if (weight > 0 && height > 0 && age > 0) {
                printf("Gender (1-Male, 2-Female): ");
                scanf("%d", &gender);
                if (gender == 1) {
                    result = (10 * weight) + (6.25 * height) - (5 * age) + 5;
                    printf("BMR: %.2f kcal/day\n", result);
                } else if (gender == 2) {
                    result = (10 * weight) + (6.25 * height) - (5 * age) - 161;
                    printf("BMR: %.2f kcal/day\n", result);
                } else {
                    printf("Error: Invalid gender.\n");
                }
            } else {
                printf("Error: Invalid input.\n");
            }
            break;
        case 3:
            printf("Enter height (inches): ");
            scanf("%f", &height);
            if (height > 60) {
                printf("Gender (1-Male, 2-Female): ");
                scanf("%d", &gender);
                if (gender == 1) {
                    result = 50 + (2.3 * (height - 60));
                    printf("Ideal Weight: %.2f kg\n", result);
                } else if (gender == 2) {
                    result = 45.5 + (2.3 * (height - 60));
                    printf("Ideal Weight: %.2f kg\n", result);
                } else {
                    printf("Error: Invalid gender.\n");
                }
            } else {
                printf("Error: Height must be > 60 inches.\n");
            }
            break;
        case 4:
            printf("Enter age: ");
            scanf("%f", &age);
            if (age > 0) {
                float maxHR = 220 - age;
                printf("Max HR: %.0f bpm\n", maxHR);
                printf("Zone (60-85%%): %.0f - %.0f bpm\n", maxHR * 0.6, maxHR * 0.85);
            } else {
                printf("Error: Invalid age.\n");
            }
            break;
        default:
            printf("Error: Invalid selection.\n");
    }
    return 0;
}