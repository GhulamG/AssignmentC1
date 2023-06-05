#include <stdio.h>

int main() {
    char name[50], seat_no[50];
    float english, electronics, math, programming, total, percentage;
    
    printf("Enter name of student? ");
    fgets(name, 50, stdin);
    
    printf("Enter seat no? ");
    fgets(seat_no, 50, stdin);
    
    printf("Enter marks of English? ");
    scanf("%f", &english);
    
    printf("Enter marks of Basic Electronics? ");
    scanf("%f", &electronics);
    
    printf("Enter marks of Mathematics? ");
    scanf("%f", &math);
    
    printf("Enter marks of Computer Programming? ");
    scanf("%f", &programming);
    
    total = english + electronics + math + programming;
    percentage = (total / 400) * 100;
    
    printf("\nM A R K S H E E T\n");
    printf("Name: %sSeat No: %s", name, seat_no);
    printf("------------------------------------------------------------\n");
    printf("Subjects   Marks\n");
    printf("------------------------------------------------------------\n");
    printf("1. English            %.0f\n", english);
    printf("2. Basic Electronics  %.0f\n", electronics);
    printf("3. Mathematics        %.0f\n", math);
    printf("4. Computer Programming %.0f\n", programming);
    printf("------------------------------------------------------------\n");
    printf("Total: %.0f      Percentage: %.2f%%\n", total, percentage);
    
    return 0;
}
