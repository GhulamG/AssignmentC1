#include <stdio.h>

int main() {
    int num, square, cube;
    
    printf("Please enter a number:");
    scanf("%d", &num);
    
    // Calculating the square and cube
    square = num * num;
    cube = num * num * num;
    
    // Printing the results
    printf("The square of %d is: %d\n", num, square);
    printf("The cube of %d is: %d\n", num, cube);
    
    return 0;
}
