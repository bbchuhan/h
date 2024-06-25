#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pattern
    
    // Outer loop for number of rows
    for (int i = 1; i <= rows; i++) {
        
        // Inner loop for printing stars
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        
        // Move to the next line after each row
        printf("\n");
    }
    
    return 0;
}
