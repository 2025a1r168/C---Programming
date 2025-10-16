#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digit, sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num; // Store original number

    // Loop to calculate sum of cubes of digits
    while (temp != 0) {
        digit = temp % 10;              // Get last digit
        sum += digit * digit * digit;   // Cube it and add to sum
        temp /= 10;                     // Remove last digit
    }

    // Check if sum equals original number
    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}