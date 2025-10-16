#include <stdio.h>

int main() {
    int num, i;
    int factorial = 1;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate factorial using for loop
    for (i = 1; i <= num; i++) {
        factorial = factorial * i;
    }

    // Display result
    printf("Factorial of %d is %d\n", num, factorial);

    return 0;
}