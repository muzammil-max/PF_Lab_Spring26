#include <stdio.h>
int main (){

    int seats[5][6] = {
 //  0  1  2  3  4  5 
    {1, 0, 1, 0, 0, 1}, //0
    {0, 0, 1, 1, 0, 0}, //1
    {1, 1, 1, 0, 1, 0}, //2 
    {0, 1, 0, 0, 0, 1}, //3
    {1, 0, 0, 1, 1, 0}  //4
};


int book = 0;
int large = 0;
int c = 0;
int rowhigh;

for(int rows = 0; rows <=4-1; rows++){
    
    for(int col = 0; col < 5-1;col++){
        if(seats[rows][col] == 1){
            book++;
            c++;
        }

        if(c > large){
            large = c;
            rowhigh =rows;
        }
    }
    c = 0;
}

printf("Total Seats books: %d \n",30-book);
printf("Row %d has highest booked seats.",rowhigh+1);



}