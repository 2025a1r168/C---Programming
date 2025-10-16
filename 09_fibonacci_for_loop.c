#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1, next;

    // Input how many terms to print
    printf("Enter the number of terms for Fibonacci sequence: ");
    scanf("%d", &n);

    printf("Fibonacci sequence: ");

    for (i = 0; i < n; i++) {
        if (i <= 1)
            next = i;  // First two terms are 0 and 1
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    printf("\n");
    return 0;
}