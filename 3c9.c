#include <stdio.h>

void Bai3_9(void)
{
    int arr[100];
    int size, i, j, temp;

    printf("Input the size of the array: ");
    scanf("%d", &size);

    printf("Input %d elements in the array:\n", size);
    for (i = 0; i < size; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Elements of the array in sorted descending order:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
void Bai4_1()

int main() 
{
    char bt;
    printf("Input Bai tap so: ");
    scanf("%d", &bt);
    switch (bt)
    {
    case '3.9':
        printf("start bai tap 3.9");
        Bai3_9();
        break;
    case '3.10':
        printf("start bai tap 3.10");
        Bai3_10();
    break;    
    
    default:
        break;
    }
    
    
}
