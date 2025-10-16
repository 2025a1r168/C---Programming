#include <stdio.h>

int main() {
    int num, count = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle 0 as a special case
    if (num == 0) {
        count = 1;
    } else {
        // Loop to count digits
        while(num != 0) {
            num /= 10; // Remove last digit
            count++;   // Increment count
        }
    }

    printf("Number of digits: %d\n", count);

    return 0;
}