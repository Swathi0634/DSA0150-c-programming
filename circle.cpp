#include <iostream>
#include <cmath> // Include the cmath header for mathematical functions

const double pi = 3.14159265358979323846; // Define the value of pi

// Function to calculate the area of a circle
double findArea(double radius) {
    return pi * radius * radius;
}

int main() {
    double r; // Radius
    std::cout << "Enter the radius of the circle: ";
    std::cin >> r;

    double area = findArea(r);
    std::cout << "Area of the circle: " << area << std::endl;

    return 0;
}
