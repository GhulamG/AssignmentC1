#include <stdio.h>

int main() {
  int input_seconds, hours, minutes, seconds;
  
  printf("Input seconds? ");
  scanf("%d", &input_seconds);
  
  hours = input_seconds / 3600;  // 1 hour = 3600 seconds
  input_seconds = input_seconds % 3600;
  
  minutes = input_seconds / 60;  // 1 minute = 60 seconds
  seconds = input_seconds % 60;
  
  printf("Hours Minutes Seconds\n");
  printf("%d     %d       %d\n", hours, minutes, seconds);
  
  return 0;
}
