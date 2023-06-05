#include <stdio.h>

int main() {
  int input_days, years, weeks, days;
  
  printf("Input days? ");
  scanf("%d", &input_days);
  
  years = input_days / 365;  // assuming 1 year = 365 days
  input_days = input_days % 365;
  
  weeks = input_days / 7;  // 1 week = 7 days
  days = input_days % 7;
  
  printf("Years Weeks Days\n");
  printf("%d     %d     %d\n", years, weeks, days);
  
  return 0;
}
