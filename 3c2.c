#include <stdio.h>

// Define structure for Car
struct Car {
    int carID;
    char model[20];
    float rentalRatePerDay;
};

int main() {
    struct Car cars[3]; // Array to store details of three cars
    int days;
    float totalCost = 0;

    // Input details for each car
    for (int i = 0; i < 3; i++) {
        printf("Input details for Car %d:\n", i + 1);
        printf("Car ID: ");
        scanf("%d", &cars[i].carID);
        printf("Model: ");
        scanf("%s", cars[i].model);
        printf("Rental Rate per Day: ");
        scanf("%f", &cars[i].rentalRatePerDay);
    }

    // Input the number of days for rental
    printf("Enter the number of rental days: ");
    scanf("%d", &days);

    // Calculate the total rental cost for specified days for each car
    for (int i = 0; i < 3; i++) {
        float carCost = cars[i].rentalRatePerDay * days;
        printf("Total Rental Cost for Car %d: %.2f\n", i + 1, carCost);
    }

    return 0;
}
