#include <stdio.h>

int main() {
    int arr[100], even[100], odd[100];
    int num_elements, num_even = 0, num_odd = 0, i;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &num_elements);

    printf("Input %d elements in the array:\n", num_elements);
    for (i = 0; i < num_elements; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < num_elements; i++) {
        if (arr[i] % 2 == 0) {
            even[num_even++] = arr[i];
        } else {
            odd[num_odd++] = arr[i];
        }
    }

    printf("The Even elements are :\n");
    for (i = 0; i < num_even; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    printf("The Odd elements are :\n");
    for (i = 0; i < num_odd; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
