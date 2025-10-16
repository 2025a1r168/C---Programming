#include <stdio.h>
#include <math.h>  // Needed for sqrt() and pow()

int main() {
    float x1, y1, x2, y2, distance;

    // Input coordinates of two points
    printf("Enter x and y for first point: ");
    scanf("%f %f", &x1, &y1);

    printf("Enter x and y for second point: ");
    scanf("%f %f", &x2, &y2);

    // Calculate Euclidean distance
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Display result
    printf("Euclidean distance between the points: %.2f\n", distance);

    return 0;
}