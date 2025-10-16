#include <stdio.h>

int main() {
    int n, i, min, num;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Invalid input. Number of elements must be positive.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    scanf("%d", &num);
    min = num;  

    for(i = 1; i < n; i++) {
        scanf("%d", &num);
        if(num < min) {
            min = num;
        }
    }

    printf("The minimum number is: %d\n", min);

    return 0;
}