#include <stdio.h>

int main() {
    int num1, num2, sum, product;

    // Ask user to enter two integers
    printf("Enter 1st number? ");
    scanf("%d", &num1);

    printf("Enter 2nd number? ");
    scanf("%d", &num2);

    // Calculate sum and product
    sum = num1 + num2;
    product = num1 * num2;

    // Print sum and product
    printf("---------------------------------------\n");
    printf("Sum of %d and %d is : %d\n", num1, num2, sum);
    printf("Product of %d and %d : %d\n", num1, num2, product);

    return 0;
}
