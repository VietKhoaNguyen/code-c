#include <stdio.h>
#define PI 3.14159265358979323846

// Function prototypes
double calculateArea(double radius);
double calculateCircumference(double radius);

int main() {
    // Preassigned radius
    double preassignedRadius = 5.0;
    double preassignedArea = calculateArea(preassignedRadius);
    double preassignedCircumference = calculateCircumference(preassignedRadius);
    
    // Display results for the preassigned radius
    printf("For a circle with a preassigned radius of %.2f:\n", preassignedRadius);
    printf("Area: %.2f\n", preassignedArea);
    printf("Circumference: %.2f\n\n", preassignedCircumference);

    // Radius input from the keyboard
    double inputRadius;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &inputRadius);

    // Calculate and display area and circumference for the input radius
    double inputArea = calculateArea(inputRadius);
    double inputCircumference = calculateCircumference(inputRadius);

    printf("For a circle with an input radius of %.2f:\n", inputRadius);
    printf("Area: %.2f\n", inputArea);
    printf("Circumference: %.2f\n", inputCircumference);

    return 0;
}

// Function to calculate the area of a circle
double calculateArea(double radius) {
    return PI * radius * radius;
}

// Function to calculate the circumference of a circle
double calculateCircumference(double radius) {
    return 2 * PI * radius;
}
