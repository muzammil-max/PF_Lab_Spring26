#include <stdio.h>
int main(){


float temp[7][3];
float high = 0.0;
float sum = 0.0;
float avg = 0.0;
for(int rows = 0;  rows <=7-1; rows++)
{
    for(int col = 0; col <= 3-1;col++) {
        printf("\nEnter the temperature %d for day %d: ",col+1,rows+1);
        scanf("%f",&temp[rows][col]);

        sum+= temp[rows][col];
        if (temp[rows][col] > high) {
            high  = temp[rows][col];
        }
    }
}

avg = sum /7;

printf("Highest temperature ever: %.2lf\n",high);
printf("Average Temperature: %.2lf",avg);







}