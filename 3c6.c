#include<stdio.h>
#include <stdio.h>

int main() {
    int arr[100];
    int elements, i;
    int max, min;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &elements);

    printf("Input %d elements in the array:\n", elements);
    for (i = 0; i < elements; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }


    max = arr[0];
    min = arr[0];
    
    for (i = 1; i < elements; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum element is : %d\n", max);
    printf("Minimum element is : %d\n", min);

    return 0;
}