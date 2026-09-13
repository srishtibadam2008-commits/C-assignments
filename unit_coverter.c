 #include <stdio.h>
int main() {
double fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("\n--- Conversion Result ---\n");
    printf("Fahrenheit: %.2lf F\n", fahrenheit);
    printf("Celsius:    %.2lf C\n", celsius);

    return 0;
}
