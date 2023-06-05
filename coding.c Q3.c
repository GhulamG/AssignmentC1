#include <stdio.h>

int main() {
    float basicPay, houseRent, medicalAllowance, computerAllowance, totalPay;
    
    printf("Please enter Basic pay?");
    scanf("%f", &basicPay);
    
    houseRent = 0.4 * basicPay;
    medicalAllowance = 0.18 * basicPay;
    computerAllowance = 0.15 * basicPay;
    
    totalPay = basicPay + houseRent + medicalAllowance + computerAllowance;
    
    printf("\n PAY SLIP\n");
    printf("Basic pay :%.0f\n", basicPay);
    printf("House Rent (40%%) :%.0f\n", houseRent);
    printf("Medical Allowance (18%%) :%.0f\n", medicalAllowance);
    printf("Computer Allowance (15%%) :%.0f\n", computerAllowance);
    printf("-----------------------------------------------------------------------------\n");
    printf("Total pay: :%.0f\n", totalPay);
    
    return 0;
}
