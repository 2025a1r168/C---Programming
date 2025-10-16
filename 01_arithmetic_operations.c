#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Perform arithmetic operations
    int sum = num1 + num2;
    int diff = num1 - num2;
    int product = num1 * num2;
    int remainder = num1 % num2; 

    // Display results
    printf("\nResults:\n");
    printf("%d + %d = %d\n", num1, num2, sum);
    printf("%d - %d = %d\n", num1, num2, diff);
    printf("%d * %d = %d\n", num1, num2, product);
    printf("%d %% %d = %d\n", num1, num2, remainder);

    return 0;
}