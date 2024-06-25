#include <stdio.h>

#define MAX_SIZE 100

void findEven(int *arr, int size) {
    int *ptr = arr;  // Pointer to traverse the array

    printf("Even elements in the array: ");
    for (int i = 0; i < size; i++) {
        if (*ptr % 2 == 0) {
            printf("%d ", *ptr);
        }
        ptr++;  // Move the pointer to the next element
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE];
    int size;

    // Input size of the array
    printf("Enter size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Call function to find and print even elements
    findEven(arr, size);

    return 0;
}
