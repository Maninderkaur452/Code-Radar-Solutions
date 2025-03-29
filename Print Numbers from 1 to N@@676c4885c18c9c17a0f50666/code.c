#include <stdio.h>

int main() {
    int n;

    // Taking user input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop to print numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n"); // Newline for better output formatting
    return 0;
}
