#include <stdio.h>

int main() {
    int i, j;

    printf("Multiplication Table from 1 to 10:\n\n");

    for (i = 1; i <= 10; i++) {          // Outer loop for rows
        for (j = 1; j <= 10; j++) {      // Inner loop for columns
            printf("%d x %d = %d\t", i, j, i * j);
        }
        printf("\n"); // Move to next row after inner loop
    }

    return 0;
}