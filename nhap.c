#include <stdio.h>

int main() {
    int *arr, n, i;
    
    // Input total number of elements
    printf("Input total number of elements (1 to 100): ");
    scanf("%d", &n);
    
    // Check if the number of elements is valid
    if (n < 1 || n > 100) {
        printf("Invalid input. Number of elements should be between 1 and 100.\n");
        return 1; // Exit with error
    }
    
    // Dynamically allocate memory for the array
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with error
    }
    
    // Input elements
    for (i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Find the largest element
    int max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    // Output the result
    printf("Largest element: %d\n", max);
    
    // Free dynamically allocated memory
    free(arr);
    
    return 0; // Exit successfully
}
