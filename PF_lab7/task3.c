#include <stdio.h>
int main() {
    int b1[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}; //array that store pass student number
    int b2[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}; //arrya that store failed student number
    int sumP = 0;
    float avgP;
    int sumF = 0;
    float avgF;
    int marks;

    for (int i = 0; i <=9;i++) {
        printf("Enter the marks of student %d: ",i+1);
        scanf("%d",&marks);

        if (marks >= 5 && marks <=10) {
            b1[i] =marks;
            sumP += b1[i];
            avgP = sumP/10.0;


        } else if (marks <5 && marks>=0) {
            b2[i] = marks;
            sumF += b2[i];
            avgF = sumF/10.0;

        } else if (marks ==-1) {
            break;
        }

    }

    printf("\nMarks for Passed students! \n");
    for (int m = 0; m <=9;m++) {
        if (b1[m] != -1) {
        printf("\n Marks for student %d is: %d",m+1,b1[m]);
        }
        if (m==9) {
            printf("\nClass Average for passed students: %.2lf",avgP);
        }
    }

    printf("\n Marks for Failed students! \n");
    for (int n = 0; n <=9;n++) {
        if (b2[n] != -1) {
        printf("\n Marks for student %d is: %d",n+1,b2[n]);
        }
        if (n==9) {
            printf("\nClass Average for passed students: %.2lf",avgF);
        }
    }

    // int b2[10]
}