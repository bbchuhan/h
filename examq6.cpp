#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    char fruit_name[50], color[20];

    // Open file in write mode
    FILE *file = fopen("data.txt", "w");

    if (file == NULL) {
        printf("Unable to create file.\n");
        return 1;
    }

    // Prompt user to enter number of fruits
    printf("Enter the number of fruits: ");
    scanf("%d", &n);

    // Consume newline character left by scanf
    while (getchar() != '\n');

    // Prompt user to enter fruit details and write to file
    for (int i = 0; i < n; ++i) {
        printf("Enter name of fruit %d: ", i + 1);
        fgets(fruit_name, sizeof(fruit_name), stdin);
        fruit_name[strcspn(fruit_name, "\n")] = '\0'; // Remove newline character
        
        printf("Enter color of fruit %d: ", i + 1);
        fgets(color, sizeof(color), stdin);
        color[strcspn(color, "\n")] = '\0'; // Remove newline character
        
        // Write to file
        fprintf(file, "%s - %s\n", fruit_name, color);
    }

    // Close file
    fclose(file);

    printf("Data written to data.txt successfully.\n");

    return 0;
}
