#include <stdio.h>
#include <stdlib.h>  // for dynamic memory allocation

// Define a structure to represent a laptop
struct Laptop {
    char company_name[50];
    char processor[50];
    float price;
};

int main() {
    int N;  // Number of laptops
    printf("Enter the number of laptops: ");
    scanf("%d", &N);

    // Declare an array of structures to store details of N laptops
    struct Laptop *laptops = (struct Laptop *) malloc(N * sizeof(struct Laptop));

    // Input details for each laptop
    printf("\nEnter details of each laptop:\n");
    for (int i = 0; i < N; ++i) {
        printf("\nLaptop %d:\n", i + 1);
        printf("Company Name: ");
        scanf(" %[^\n]s", laptops[i].company_name); // %[^\n]s is used to read string with spaces
        printf("Processor: ");
        scanf(" %[^\n]s", laptops[i].processor);
        printf("Price: ");
        scanf("%f", &laptops[i].price);
    }

    // Displaying details of all laptops
    printf("\nDetails of all laptops:\n");
    for (int i = 0; i < N; ++i) {
        printf("\nLaptop %d:\n", i + 1);
        printf("Company Name: %s\n", laptops[i].company_name);
        printf("Processor: %s\n", laptops[i].processor);
        printf("Price: %.2f\n", laptops[i].price);
    }

    // Free dynamically allocated memory
    free(laptops);

    return 0;
}
