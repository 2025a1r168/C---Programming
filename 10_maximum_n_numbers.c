#include <stdio.h>

int main() {
    int n, i, num, max;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &num);
    max = num; // Assume first number is maximum

    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    }

    printf("Maximum value is: %d\n", max);

    return 0;
}