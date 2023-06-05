#include <stdio.h>

int main() {
    int num1, num2, sum, product, difference, division, remainder, total;

    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter last number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    product = num1 * num2;
    difference = num1 - num2;
    division = num1 / num2;
    remainder = num1 % num2;
    total = sum + product + difference + division + remainder;

    printf("Sum of %d and %d is: %02d\n", num1, num2, sum);
    printf("Product of %d and %d is: %02d\n", num1, num2, product);
    printf("Difference between %d and %d is: %02d\n", num1, num2, difference);
    printf("Division of %d and %d is: %02d\n", num1, num2, division);
    printf("Remainder of %d and %d is: %02d\n", num1, num2, remainder);
    printf("--------------------------------------------------------------\n");
    printf("Total is: %02d", total);

    return 0;
}
