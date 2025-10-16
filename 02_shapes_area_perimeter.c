#include <stdio.h>

int main() {
    float radius, side, length, width;
    float circle_area, circle_perimeter;
    float square_area, square_perimeter;
    float rectangle_area, rectangle_perimeter;

    // Circle
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    circle_area = 3.14 * radius * radius;
    circle_perimeter = 2 * 3.14 * radius;

    // Square
    printf("Enter side of the square: ");
    scanf("%f", &side);
    square_area = side * side;
    square_perimeter = 4 * side;

    // Rectangle
    printf("Enter length and width of the rectangle: ");
    scanf("%f %f", &length, &width);
    rectangle_area = length * width;
    rectangle_perimeter = 2 * (length + width);

    // Display results
    printf("\n--- Areas and Perimeters ---\n");
    printf("Circle - Area: %.2f, Perimeter: %.2f\n", circle_area, circle_perimeter);
    printf("Square - Area: %.2f, Perimeter: %.2f\n", square_area, square_perimeter);
    printf("Rectangle - Area: %.2f, Perimeter: %.2f\n", rectangle_area, rectangle_perimeter);

    return 0;
}