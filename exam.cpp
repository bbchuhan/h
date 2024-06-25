#include <stdio.h>

int main() {
    int marks[5];
    int i, sum = 0;
    float average;
    
    // Input marks for each subject
    printf("Enter marks for 5 subjects (out of 100):\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        
        // Validate marks are between 0 and 100
        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks! Marks should be between 0 and 100.\n");
            return 1; // Exit program with error
        }
        
        // Calculate sum of marks
        sum += marks[i];
    }
    
    // Calculate average marks
    average = (float)sum / 5.0;
    
    // Determine grade based on average
    char grade;
    if (average >= 90.0) {
        grade = 'A';
    } else if (average >= 80.0) {
        grade = 'B';
    } else if (average >= 70.0) {
        grade = 'C';
    } else if (average >= 60.0) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    
    // Output average and grade
    printf("\nAverage marks = %.2f\n", average);
    printf("Grade = %c\n", grade);
    
    return 0;
}

