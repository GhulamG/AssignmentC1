#include <stdio.h>

int main() {
    int num, digit, sum = 0;
    printf("Please enter five-digit number ? ");
    scanf("%d", &num);
    printf("Separated from one another by three spaces: ");
    // separating digits
    digit = num / 10000;
    printf("%d   ", digit);
    sum += digit;
    digit = (num / 1000) % 10;
    printf("%d   ", digit);
    sum += digit;
    digit = (num / 100) % 10;
    printf("%d   ", digit);
    sum += digit;
    digit = (num / 10) % 10;
    printf("%d   ", digit);
    sum += digit;
    digit = num % 10;
    printf("%d\n", digit);
    sum += digit;
    printf("Sum of five digits: %d", sum);
    return 0;
}
