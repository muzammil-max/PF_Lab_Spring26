#include <stdio.h>
int main() {

int sum = 0;
int avg = 0;

int marks[4][3] = {
{80, 75, 90},
{60, 70, 85},
{88, 92, 79},
{55, 65, 70}
};

for (int i  = 0; i <= 4-1 ; i++){
    for(int j = 0; j<= 3-1; j++){
        sum += marks[i][j];
    }
}

avg  = sum/(4*3);

printf("Sum is: %d \n",sum);
printf("avg is: %d",avg);

}