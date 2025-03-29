#include <stdio.h>

int main() {
    int n, sum = 0;

    // Taking input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculating sum using loop
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Printing the result
    printf("Sum of first %d natural numbers is: %d\n", n, sum);

    return 0;
}
