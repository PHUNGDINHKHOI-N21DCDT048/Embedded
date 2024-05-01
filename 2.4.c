#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    printf("Enter the value(a, b, c): ");
    scanf("%d" "%d" "%d", &a, &b, &c);
    int max;
    max = a;
    if (b > max) {
        max = b;
    }
    else{}
    if (c > max) {
        max = c;
    }
    else{}
    printf("The maximum value among %d, %d, and %d is: %d\n", a, b, c, max);
    return 0;
}