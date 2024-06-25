#include <stdio.h>

// Function to print odd elements from an array
void printOddElements(int arr[], int size) {
    printf("Odd elements in the array are: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Function call to print odd elements
    printOddElements(arr, size);

    return 0;
}
