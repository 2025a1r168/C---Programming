#include <stdio.h>

int main() {
    int choice;
    
    printf("Choose a shape:\n");
    printf("1. Circle\n");
    printf("2. Square\n");
    printf("3. Rectangle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    if (choice == 1) {
        float radius;
        printf("Enter radius of the circle: ");
        scanf("%f", &radius);
        printf("Circle Area: %.2f\n", 3.14 * radius * radius);
        printf("Circle Perimeter: %.2f\n", 2 * 3.14 * radius);
    }
    else if (choice == 2) {
        float side;
        printf("Enter side of the square: ");
        scanf("%f", &side);
        printf("Square Area: %.2f\n", side * side);
        printf("Square Perimeter: %.2f\n", 4 * side);
    }
    else if (choice == 3) {
        float length, width;
        printf("Enter length: ");
        scanf("%f", &length);
        printf("Enter width: ");
        scanf("%f", &width);
        printf("Rectangle Area: %.2f\n", length * width);
        printf("Rectangle Perimeter: %.2f\n", 2 * (length + width));
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}