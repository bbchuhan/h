#include <stdio.h>

// Function to calculate the average of all elements in a 2D array
double calculateAverage(int arr[][3], int rows, int cols) {
    double sum = 0.0;
    int totalElements = rows * cols;

    // Calculate sum of all elements
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum += arr[i][j];
        }
    }

    // Calculate average
    double average = sum / totalElements;
    return average;
}

int main() {
    // Example 2D array
    int array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int rows = 3;
    int cols = 3;

    // Calculate average using the function
    double avg = calculateAverage(array, rows, cols);

    // Print the average
    printf("Average of all elements in the 2D array: %.2f\n", avg);

    return 0;
}
