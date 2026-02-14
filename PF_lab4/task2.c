#include <stdio.h>
int main() {
    int size = 0;
    printf("Enter total GB used: ");
    scanf("%d",&size);
    printf("\n");

    if(size <= 50.0){
        printf("Basic USer");
    } else if (size >50.0 && size <=150.0)
    {
        printf("Standard USer");
    } else {
        printf("Heavy user");
    }
}