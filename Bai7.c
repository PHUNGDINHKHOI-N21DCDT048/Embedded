#include <stdio.h>
 int main() {
    int length, width, Area, Perimeter ;
    printf("Enter the length of rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of rectangle: ");
    scanf("%d", &width);
    if ( length < width ){
           printf("Error! The length must be larger or equal to the width. Please enter again. \n ");
           printf("Enter the length of rectangle: ");
           scanf("%d", &length);
           printf("Enter the width of rectangle: ");
           scanf("%d", &width);
    }
    Area = length * width ;
    Perimeter = 2 * (length + width);
    printf("Area of rectangle: %d\n", Area);
    printf("Perimeter of rectangle: %d\n", Perimeter);
    return 0;
}