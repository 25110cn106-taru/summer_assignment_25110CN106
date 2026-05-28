#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input value of N
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate sum of first N natural numbers
    for(int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    // Display result
    printf("Sum of first %d natural numbers is: %d", n, sum);

    return 0;
}