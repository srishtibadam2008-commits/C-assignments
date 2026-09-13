#include <stdio.h>

int main() {
    double speed, time;
    double distance, meters, centimeters, millimeters;

    printf("Enter speed in km/h: ");
    scanf("%lf", &speed);

    printf("Enter time in hours: ");
    scanf("%lf", &time);

    // Calculate distance in kilometers
    distance = speed * time;

    // Convert kilometers to other units
    meters = distance * 1000;
    centimeters = distance * 100000;
    millimeters = distance * 1000000;

    printf("\n--- Conversion Results ---\n");
    printf("Distance in Meters:      %.2f m\n", meters);
    printf("Distance in Centimeters: %.2f cm\n", centimeters);
    printf("Distance in Millimeters: %.2f mm\n", millimeters);

    return 0;
}

